#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct linked_list
{
    struct node *head;
};

void _append(linked_list &, int);
void _addafter(linked_list, int, int);
int _count(linked_list);
void _delete(linked_list &, int);
//MYcode
int Search(linked_list & , int );
node* CreateNode(int data);
void _append(node **q , int x);
node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE;
}
void _append(linked_list &ll , int x ){
    node* new_node = CreateNode(x);

    if(ll.head == NULL){
        ll.head = new_node;
    }
    else{
        node* p  = ll.head;
        while(p->link != NULL){
            p = p->link;
        }
        p->link = new_node;

}
}
void _addatbeg( linked_list &ll , int x ){
    node* new_node = CreateNode(x);
    if (ll.head == NULL) {
            ll.head = new_node;
    }
    else {
        new_node->link = ll.head;
        ll.head = new_node;
    }
}
void _addafter(linked_list ll, int i, int x){
    if(i == 0 || ll.head == NULL){
        _addatbeg(ll, x);
    }  else {

        int k = 0;
        node* p = ll.head;
        while(p != NULL && k != i){
            p = p->link;
            k++;
        }

        if(k != i){

            _append(ll, x);

        }else{
            node* temp = CreateNode(x);
            temp->link = p->link;
            p->link = temp;
        }
    }
}
int _count(linked_list ll) {
    node* new_node = ll.head;
    int CountNode=1;
    while (new_node->link != NULL) {
        CountNode++;
        new_node = new_node->link;
    }
    return CountNode;
}
    int Search(linked_list &ll , int x){
    int i = 0;

        node* p = ll.head;
            while (p->link != NULL) {
                if(p->data == x)
                    return i;
                p = p-> link;
            i++;
            }

    return -1;
}
    void _delete(linked_list &ll , int x ){
    node* p = ll.head;
    while (p->link != NULL) {
    int i = Search(ll , x);
            node* p = ll.head;
            int k = 1;
            node* temp = ll.head;
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

//Endcode

void _display(linked_list ll)
{
    node *q = ll.head;

    while(q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;
}

int main()
{
    linked_list ll;
    ll.head = NULL;

    _append(ll, 1);
    _append(ll, 2);
    _append(ll, 3);
    _append(ll, 4);
    _append(ll, 17);

    _display(ll);
     _addatbeg(ll, 999);
    _addatbeg(ll, 888);
    _addatbeg(ll, 777);

    _display(ll);
    _addafter(ll, 7, 0);
    _addafter(ll, 2, 1);
    _addafter(ll, 1, 99);

    _display(ll);
    cout << "No. of element in the Linked List = " << _count(ll) << endl;
    _delete(ll, 888);
    _delete(ll, 1);
    _delete(ll, 10);

    _display(ll);

    cout << "No. of element in the Linked List = " << _count(ll) << endl;

    return 0;
}
