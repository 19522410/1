#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* link;
};

void _add(node**, int);

void _delete(node**, int);

void _addafter(node*, int, int);

int _count(node*);


//************************
int Search(node** head, int x);
void _append(node**, int);
void _addatbeg(node**, int);
node* CreateNode(int data);
int _count(node* q) {
    node* p = q;
    if (q == NULL) return 0;
    int CountNode = 1;
    while (p->link != NULL) {
        CountNode++;
        p = p->link;
    }
    return CountNode;
}
node* CreateNode(int data) {
    node* NODE = new node;

    NODE->data = data;
    NODE->link = NULL;
    return NODE;
}

void _addafter(node* head, int i, int x)
{
    if (i == 0 || head == NULL)
    {
        _addatbeg(&head, x);
    }
    else {

        int k = 0;
        node* p = head;
        while (p != NULL && k != i)
        {
            p = p->link;
            k++;
        }

        if (k != i)
        {

            _append(&head, x);

        }
        else
        {
            node* temp = CreateNode(x);
            temp->link = p->link;
            p->link = temp;
        }
    }
}
int SearchNode(node** head, int x) {
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
void _append(node** head, int x) {// THEM CUOI
    node* new_node = CreateNode(x);

    if (*head == NULL) {
        *head = new_node;
    }
    else {
        node* p = *head;
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = new_node;

    }
}
void _addatbeg(node** q, int x) {//THEM DAU
    node* new_node = CreateNode(x);
    if (q == NULL) {
        *q = new_node;
    }
    else {
        new_node->link = *q;
        *q = new_node;
    }
}


void _add(node** head, int x) {

    node* new_node = CreateNode(x);
    if (*head == NULL) {
        *head = new_node;
    }
    else {

        node* e = *head;
        if (_count(*head) == 1) {
            if (new_node->data <= e->data) {
                _addatbeg(head, x);
            }
            else {
                _append(head, x);
            }
        }
        else if (_count(*head) > 1) {
            int j = SearchNode(head, x);
            if (j == 0) {
                _addatbeg(head, x);
            }
            else if (j == -1) {
                _append(head, x);

            }
            else if (j >= 1) {
                _addafter(*head, j - 1, x);
            }

        }


    }
}
int Search(node** head, int x) {
    int i = 0;

    node* p = *head;
    while (p->link != NULL) {
        if (p->data == x)
            return i;
        i++;
        p = p->link;
    }

    return -1;
}
node* DelHead(node* head) {

    head = head->link;
    return head;
}
node* DelTail(node* head) {
    node* p = head;
    while (p->link->link != NULL) {
        p = p->link;
    }
    p->link = p->link->link; // Cho next bằng NULL
    // Hoặc viết p->next = NULL cũng được
    return head;
}
void _delete(node** head, int x) {
    node* q = *head;
    while (q->link != NULL) {
        int i = Search(head, x);
        if (i == 0 || head == NULL) {
            *head = DelHead(*head); // Nếu vị trí chèn là 0, tức là thêm vào đầu
        }
        else {
            // Bắt đầu tìm vị trí cần chèn. Ta sẽ dùng k để đếm cho vị trí
            int k = 1;
            node* p = *head;
            while (p->link->link != NULL && k != i) {
                p = p->link;
                ++k;
            }

            if (k == i) {

                p->link = p->link->link;
            }
        }
        q = q->link;
    }
}







//************************
void _display(node* q)
{
    while (q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;
}

int main()
{
    node* p;
    p = NULL;

    _add(&p, 5);

    _add(&p, 1);

    _add(&p, 6);

    _add(&p, 1);
    _add(&p, 4);
    _add(&p, 7);
    _add(&p, 1);
    _add(&p, 9);
    _add(&p, 5);
    _add(&p, 4);

    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    _delete(&p, 1);
    _delete(&p, 10);
    _delete(&p, 5);


    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    return 0;
}
