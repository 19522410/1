

#include <iostream>
using namespace std;

struct Node
{
	int in4;
	Node* pNext;
};
struct List
{
	Node* pHead;
	Node* pTail;
};
Node* CreateNode(int q)
{
	Node *p = new Node;
	p->in4 = q;
	p->pNext = NULL;
	return p;
}
void AddHead(List& lst, int q)
{
	Node* p =  CreateNode(q);
	if (lst.pHead == NULL) lst.pHead = lst.pTail = p;
	else
	{
		p->pNext = lst.pHead;
		lst.pHead = p;
	}
}
void InSitList(List& l)
{
	l.pHead = l.pTail = NULL;
}
void Display(List lst)
{
	Node* q = lst.pHead;
	while (q)
	{
		cout << q->in4 << " ";
		q = q->pNext;
	}
	cout << endl;
}
void AddTail(List& l, int q)
{
	Node* p = CreateNode(q);
	if (l.pHead == NULL) l.pHead = l.pTail = p;
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
Node* SearchNode(List l, int x)
{
	int i = 1;
	Node* q = l.pHead;
	while (q)
	{
		if (i == x)
			return q;
		q = q->pNext;
		i++;
	}
	return NULL;
}
void InsertNode(List& l, int x, int q)
{
	Node* p = new Node;
	p = CreateNode(q);
	Node* a = SearchNode(l,x);
	if (a==NULL) AddTail(l, q);
	else
	{
		p->pNext = a->pNext;
		a->pNext = p;
	}
}
void Detele(List& l, int x)
{
	Node* q = SearchNode(l, x);	
	q->pNext = q->pNext->pNext;
}
int main()
{
	List l;
	InSitList(l);
	AddHead(l, 12);
	AddHead(l, 7);
	AddHead(l, 2);
	AddTail(l, 52);
	AddTail(l, 89);
	InsertNode(l, 2, 45);
	Display(l);
	Detele(l, 4);
	Display(l);
	return 0;
}