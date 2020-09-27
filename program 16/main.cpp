#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

void _addatbeg(node **, int);

void _reverse(node **);

int _count(node *);

//*************************
node* CreateNode(int data);
void _append(node **q , int x);
node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE;
}
void _addatbeg(node **q , int x ){
    node* new_node = CreateNode(x);
    if (q == NULL) {
            *q = new_node;
    }
    else {
        new_node->link = *q;
        *q = new_node;
    }
}
void _reverse(node **head) {
    node* p = *head;
    node* q = p->link;


     do {
        _addatbeg(head,q->data);

        q = q->link;
    }while (q!= NULL);
    p->link = NULL;

}
int _count(node * q) {
    node* new_node = q;
    int CountNode=1;
    while (new_node->link != NULL) {
        CountNode++;
        new_node = new_node->link;
    }
    return CountNode;
}


//******************************
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
    node *p;
    p = NULL;

    _addatbeg(&p, 1);
    _addatbeg(&p, 2);
    _addatbeg(&p, 3);
    _addatbeg(&p, 4);
    _addatbeg(&p, 5);
    _addatbeg(&p, 6);

    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    _reverse(&p);

    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    return 0;
}
