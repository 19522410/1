
//------------------------

#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* link;
};

node* _get_tail(node* q)
{
    while (q != NULL && q->link != NULL)
        q = q->link;
    return q;
}

void _addatbeg(node** q, int num)
{
    node* temp;
    temp = new node;
    temp->data = num;
    temp->link = *q;
    *q = temp;
}

void _display(node* q)
{
    while (q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;
}


node* _quick_sort(node* head, node* tail)
{
    if  ((head == tail) || (head==NULL)) return head;
    node* head_r = NULL; 
    node* tail_r = NULL;
    node* head_l = NULL;
    node* tail_l = NULL;
    node* head_tag = NULL;
    node* tail_tag = NULL;
    int tag = head->data;
        node* p = head;
        node* t;
    while (p != NULL)
    {        
        if (p->data < tag) 
        {
            _addatbeg(&head_l, p->data);            
        }
        else if (p->data > tag)
        {
            _addatbeg(&head_r, p->data);                        
        }
        else 
        {
            _addatbeg(&head_tag, p->data);            
        }
        t = p;
        p = p->link;
        delete t;
        //tail_l = _get_tail(head_l);
        //tail_r = _get_tail(head_r);
       // tail_tag = _get_tail(head_tag);
    }
    head_r = _quick_sort(head_r, tail_r);
    head_l = _quick_sort(head_l, tail_l);
     tail_l = _get_tail(head_l);
     tail_r = _get_tail(head_r);
     tail_tag = _get_tail(head_tag);



    if (head_l != NULL)
    {
         tail_l->link = head_tag;
            if (head_r != NULL)
            {
                tail_tag->link = head_r;           
            }       
        return head_l;
    }
    else
    {
            if (head_r != NULL)
                {   
                    tail_tag->link = head_r;
                }

        return head_tag;
    }
}
int main()
{
    node* head, * tail;

    head = NULL;

    int n, temp_val;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_val;
        _addatbeg(&head, temp_val);
    }

    tail = _get_tail(head);

    //_display(head);

    head = _quick_sort(head, tail);

    _display(head);

    return 0;
}