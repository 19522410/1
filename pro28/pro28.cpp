include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* link;
};

void _addatbeg(node** q, int num)
{
    node* temp;
    temp = new node;
    temp->data = num;
    temp->link = *q;
    *q = temp;
}
//
void _merge_sort(node &head)
{

}


//
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
    node* head, * tail;

    head = NULL;

    int n, temp_val;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_val;
        _addatbeg(&head, temp_val);
    }

    //_display(head);

    _merge_sort(&head);

    _display(head);

    return 0;
}
