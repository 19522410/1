
#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

void _add(node **, int);

void _merge(node *, node *, node**);

int _count(node *);

//*************************
int Search(node **head, int x);
void _append(node ** , int  );
void _addatbeg(node ** , int  );
node* CreateNode(int data);
int _count(node* q) {
    node* p = q;
    if (q == NULL) return 0;
    int CountNode=1;
    while (p->link != NULL) {
        CountNode++;
        p = p->link;
    }
    return CountNode;
}
node* CreateNode(int data) {
    node* NODE  = new node;

        NODE->data = data;
        NODE->link = NULL;
        return NODE;
}
int SearchNode(node **head, int x) {
    int i = 0;
    node* new_node = CreateNode(x);
    node* count_node = *head;
    while (count_node->link != NULL) {
        if (new_node->data <= count_node->data) return i;
        count_node = count_node->link;
        i++;
    }
    return -1;

}
void _append(node **head , int x ){// THEM CUOI
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
void _addatbeg(node **q , int x ){//THEM DAU
    node* new_node = CreateNode(x);
    if (q == NULL) {
            *q = new_node;
    }
    else {
        new_node->link = *q;
        *q = new_node;
    }
}
void _addafter(node* head, int i,int x){
    if(i == 0 || head == NULL){
        _addatbeg(&head, x);
    }
    else {

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

void _add(node **head, int x){

    node* new_node = CreateNode(x);
    if (*head == NULL) {
            *head = new_node;
    }
     else {

      node* e = *head;
        if (_count(*head)==1) {
            if (new_node->data <= e->data) {
                _addatbeg(head , x );
            }
            else {
                    _append(head , x);
            }
        }
        else if (_count(*head)> 1 ){
                int j = SearchNode(head,x);
                if (j == 0){
                        _addatbeg(head,x);
                }
                else if (j == -1) {
                        _append(head,x);

                }
                else if (j >= 1 ) {
                    _addafter(*head,j-1,x);
                    }

        }
    }
}


//***************************

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
    node *first, *second, *third;
    first = second = third = NULL;

    _add(&first, 1);
    _add(&first, 2);
    _add(&first, 3);
    _add(&first, 4);
    _add(&first, 5);
    _add(&first, 6);
    _add(&first, 7);

    cout << "First linked list: " << endl;

    _display(first);

    cout << "No. of element in the First Linked List = " << _count(first) << endl;

    _add(&second, 8);
    _add(&second, 9);
    _add(&second, 3);
    _add(&second, 4);
    _add(&second, 5);
    _add(&second, 6);
    _add(&second, 7);

    cout << "Second linked list: " << endl;

    _display(second);

    cout << "No. of element in the Second Linked List = " << _count(second) << endl;

/*    _merge(first, second, &third);

    cout << "The concatenated list: " << endl;

    _display(third);

    cout << "No. of element in the Concatenated Linked List = " << _count(third) << endl;*/

    return 0;
}
