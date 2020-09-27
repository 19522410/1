#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

void _addqatend(node **, node **, int);
void _addqatbeg(node **, node **, int);
int _delqatbeg(node **, node **);
int _delqatend(node **, node **);

//************************
node* CreateNode(int data);
node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE;
}
void _addqatbeg(node **head, node **tail , int x ){//THEM DAU
    node* new_node = CreateNode(x);
    if (*head == NULL) {
            *head=*tail= new_node;
    }
    else {
        new_node->link = *head;
        *head = new_node;
    }
}
void _addqatend(node **head , node **tail , int x ){// THEM CUOI
    node* new_node = CreateNode(x);

    if(*head == NULL){
        *head = *tail =  new_node;
    }
    else{
        (*tail)->link = new_node;
        *tail = new_node;

}
}

int _delqatbeg(node **top,node **tail) {
    node* temp;
    temp= *top;
    node* p =*top;
    int i = temp->data;
    (*top) = (*top)->link;
    return i;
}
int _delqatend(node **head, node **tail) {
node* temp = *head;
while (temp->link->link != NULL) {
   temp = temp ->link;
}
 node* p = temp->link;
    int i = p->data;
    temp->link = NULL;
    return i;
}

//********************

int _count(node *q)
{
    int c = 0;
    while(q != NULL)
    {
        q = q->link;
        c++;
    }
    return c;
}

void _q_display(node *q)
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
    node *front, *rear;
    int item;

    front = rear = NULL;

    _addqatend(&front, &rear, 11);
    _addqatbeg(&front, &rear, 10);
    _addqatend(&front, &rear, 12);
    _addqatend(&front, &rear, 13);
    _addqatend(&front, &rear, 14);
    _addqatend(&front, &rear, 15);
    _addqatend(&front, &rear, 16);
    _addqatend(&front, &rear, 17);

    _q_display(front);

    cout << "No. of element in the Deque = " << _count(front) << endl;

    cout << "Items extracted from the Deque: " << endl;

    item = _delqatbeg(&front, &rear);
    cout << item << endl;

    item = _delqatbeg(&front, &rear);
    cout << item << endl;

    item = _delqatbeg(&front, &rear);
    cout << item << endl;

    item = _delqatend(&front, &rear);
    cout << item << endl;

    _q_display(front);

    cout << "No. of element in the Deque = " << _count(front) << endl;

    return 0;
}
