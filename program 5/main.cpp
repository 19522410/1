#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct LIST {
    node *pHead;
    node *pTail;
}lst;
bool IsEmpty(LIST lst);
bool IsEmpty(LIST lst) {
    if (lst.pHead == NULL) return true;
    return false;
}
void CreateList(LIST lst){
    lst.pHead=lst.pTail=NULL;

}
node* CreateNode(int ok);
node* CreateNode(int ok){
    node* pnode = new node;
    if (pnode == NULL ) {
        return NULL;
    }
    pnode->data = ok;
    pnode->link = NULL;
}

void _append(node** , int);
void _append(node **p , int n){
   LIST lst;
   CreateList(lst);
   *(p) = CreateNode(n);

   if (IsEmpty(lst)) lst.pHead = lst.pTail = *(p);
   else {

    lst.pTail->link = *(p);
    lst.pTail = *(p);

   }

}


void _display(node *q)
{
    while(q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;

}
int main()
{
    node *head;
    head = NULL;

    _append(&head, 1);
    _append(&head, 2);
    _append(&head, 3);
    _append(&head, 4);
    _append(&head, 17);

    _display(head);

    return 0;
}
