#include <iostream>

using namespace std;
struct node {
    node* link;
    int data;
};
void addnode(node* head, int x);
node* CreateNode (int data);
void _display(node *q);
int main()
{
    node* head = NULL;
    addnode(head,8);
    addnode(head,9);
    addnode(head,5);
    addnode(head,6);
    addnode(head,3);
    addnode(head,2);
    addnode(head,7);
    addnode(head,1);
    _display(head);

    return 0;
}

node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE ;
}
void _append(node* head , int x ){// THEM CUOI
    node* new_node = CreateNode(x);

    if(head == NULL){
        head = new_node;
    }
    else{
        node* p  = head;
        while(p->link != NULL){
            p = p->link;
        }
        p->link = new_node;

}
}
void addnode(node* head, int x) {
    node* new_node = CreateNode(x);
if (head == NULL) {
        head = new_node;
}
else {
        node* p =head;
        node* q = head;
while (p->link!= NULL) {
    if (new_node->data <=  p->data) {
            if (p==head) {
                new_node->link = p;
                new_node = p;
            } else {

        new_node->link = p;
        new_node = p;
        q->link = new_node;
    }

    }
    else {
            _append(head,x);

    }
    q = p;
    p = p->link;
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
