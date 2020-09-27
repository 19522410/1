#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

void _append(node **, int);

void _addatbeg(node **, int);

void _addafter(node *, int, int);
int _count(node *);
void _delete(node **, int);
//MY_Code
int Search(node* head, int x){
    int i = 0;

        node* p = head;
            while (p->link != NULL) {
                if(p->data == x)
                    return i;
                p = p-> link;
            i++;
            }

    return -1;
}
node* CreateNode(int data);
void _append(node **q , int x);
node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE;
}
void _append(node **head , int x ){
    node* new_node = CreateNode(x);

    if(*head == NULL){
        *head = new_node;
    }
    else{
        node* p  = *head;
        while(p->link != NULL){
            p = p->link;
        }
        p->link = new_node;

}
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
void _addafter(node* head, int i, int x){
    if(i == 0 || head == NULL){
        _addatbeg(&head, x);
    }  else {

        int k = 0;
        node* p = head;
        while(p != NULL && k != i){
            p = p->link;
            k++;
        }

        if(k != i){

            _append(&head, x);

        }else{
            node* temp = CreateNode(x);
            temp->link = p->link;
            p->link = temp;
        }
    }
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
void _delete(node **q, int x){
    node* p = *q;
    while (p->link != NULL) {
    int i = Search(*q , x);
            node* p = *q;
            int k = 1;
            node* temp = *q;
            while((temp->link->link != NULL) && (k != i)) {
                temp = temp->link;
                k++;
            }
            if (k == i){
            temp->link = temp->link->link;
                }else {
                    break;
                }
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

    _addatbeg(&head, 999);
    _addatbeg(&head, 888);
    _addatbeg(&head, 777);

    _display(head);

    _addafter(head, 7, 0);
    _addafter(head, 2, 1);
    _addafter(head, 1, 99);

    _display(head);
    cout << "No. of element in the Linked List = " << _count(head) << endl;
     _delete(&head, 888);
    _delete(&head, 1);
    _delete(&head, 10);

    _display(head);

    cout << "No. of element in the Linked List = " << _count(head) << endl;
    return 0;
}
