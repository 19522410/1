/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
cout
for
while
[]
template
###End banned keyword*/

#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

void _addq(node **, node **, int);
int _delq(node **, node **);
void _q_display(node *q);

//###INSERT CODE HERE -
void _addq(node **, node** , int  );
node* CreateNode(int );
node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE;
}
void _addq(node **front,node **rear , int x ){// THEM CUOI
    node* new_node = CreateNode(x);

    if( *front == NULL){
        *front = new_node;
        *rear = new_node;
    }
    else{
            (*rear)->link = new_node;

            *rear = new_node;

    }
}
int _delq(node **top,node **tail) {
    node* temp;
    temp= *top;
    node* p =*top;
    int i = temp->data;
    (*top) = (*top)->link;
    return i;
}

//++++++++++++
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

    _addq(&front, &rear, 11);
    _addq(&front, &rear, 12);
    _addq(&front, &rear, 13);
    _addq(&front, &rear, 14);
    _addq(&front, &rear, 15);
    _addq(&front, &rear, 16);
    _addq(&front, &rear, 17);

    _q_display(front);

    cout << "No. of element in the Queue = " << _count(front) << endl;

    cout << "Items extracted from the Queue: " << endl;

    item = _delq(&front, &rear);
    cout << item << endl;

    item = _delq(&front, &rear);
    cout << item << endl;

    item = _delq(&front, &rear);
    cout << item << endl;

    _q_display(front);

    cout << "No. of element in the Queue = " << _count(front) << endl;

    return 0;
}
