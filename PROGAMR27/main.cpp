
#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

node *_get_tail(node *q)
{
    while (q != NULL && q->link != NULL)
        q = q->link;
    return q;
}

void _addatbeg(node **q, int num)
{
    node *temp;
    temp = new node;
    temp->data = num;
    temp->link = *q;
    *q = temp;
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
//********************

    struct LIST {
        node* head;
        node* tail;
    };
    bool IsEmpty(LIST& l) {
        if (l.head == NULL) return 1;
        return 0;
    }
    void Init(LIST& l) {
        l.head = l.tail = NULL;
    }
    node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE;
}
    void addHead(LIST &l, int x ){
 node *p = CreateNode(x);
 if(IsEmpty(l)) l.head = l.tail = p;
 else{
  p->link = l.head; // con tro next cua p tro toi dia chi cua node head(ban dau)
  l.head = p; // cap nhat node head( luc sau )
 }
}
node* _quick_sort(node* head , node* tail ){
 LIST l1, l2;
 node *tag, *p;
 if(head == tail ) return head;
 Init(l1); Init(l2);
 tag = head;
 head = head->link; // cap nhat lai l.head
 tag->link = NULL;// co lap tag
 while( head!= NULL ){
  p = head;
  head = head->link;
  p->link = NULL;
  if(p->data <= tag->data ) addHead(l1,p->data);
  else addHead(l2,p->data);
 }
 _quick_sort(l1.head , l1.tail); // goi de qui sap xep l1, l2
 _quick_sort(l2.head, l2.tail);
 if(l1.head != NULL ){ // l1 k rong
  head = l1.head; // lay head cua l1 gan cho head cua l;
  l1.tail->link = tag;
 } // l1 rong
 else head = tag;
 tag->link = l2.head;
 if(l2.head!= NULL ) tail = l2.tail;
 else tail = tag;
 return head;

}

//************************

int main()
{
    node *head, *tail;

    head = NULL;

    int n, temp_val;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_val;
        _addatbeg(&head, temp_val);
    }

    tail = _get_tail(head);

    _display(head);
    head = _quick_sort(head, tail);

    _display(head);

    return 0;
}
