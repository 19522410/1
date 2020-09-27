
#include<iostream>
using namespace std;

struct DATA {
    int a;
};
struct NODE {
    DATA data;
    NODE *pNext;
};
struct LIST {
   NODE *pHead;
   NODE *pTail;

};
// Tao Node
NODE* CreateNode(DATA );
void InisList(LIST&);// Khoi tao List
bool IsEmpty(LIST);//Kiem tra list rong hay khong
void AddHeadNode(LIST&,NODE*,int);//Chen node vao list
void PrintList(LIST);//xuat list
NODE* CreateNodeInt(int);
int GetSize(LIST);
void InsertNode(LIST , int , NODE* );
NODE* GetNodeAt(int , LIST);

int main()
{
    LIST lst;
    NODE *node;
    int n;
    InisList(lst);// Khoi tao List|

    for (int i = 0; i < 10 ; i++) {

        AddHeadNode(lst,node,i);
    }

    PrintList(lst);
    cout<<"\nSize: "<<GetSize(lst);
    cout<<"\nInsert At: ";cin>>n;
    InsertNode(lst,n,CreateNodeInt(66));
    cout<<endl;
    PrintList(lst);

    return 0;
}
// Tao Node
NODE* CreateNode(DATA ok){
    NODE* node = new NODE;
    if (node == NULL ) {
        return NULL;
    }
    node->data = ok;
    node->pNext = NULL;
}
// Khoi tao List
void InisList(LIST& lst){
    lst.pHead = lst.pTail = NULL;

}
bool IsEmpty(LIST lst){
    if(lst.pHead == NULL) return true;
    return false;
}
void AddHeadNode(LIST& lst,NODE* pNode,int n){
    pNode = CreateNodeInt(n);

    if (IsEmpty(lst)) {
        lst.pHead = lst.pTail = pNode;
    }
    else {
         pNode->pNext = lst.pHead ;
        lst.pHead = pNode ;
    }
}
void PrintList(LIST lst){
    if (IsEmpty(lst)) cout <<" List is empty!";
    else {
        NODE* node = lst.pHead;
        while (node != NULL) {
            cout<<node->data.a<<"\t";
            node = node->pNext;
        }
    }

}
NODE* CreateNodeInt(int n) {
    DATA data = { n };
    NODE* node = CreateNode(data);
    return node;
}
int GetSize(LIST lst){
    if (IsEmpty(lst)) return 0;
    NODE* pnode = lst.pHead;
    int count_node = 0;
    while (pnode!= NULL) {
            count_node++;
            pnode = pnode->pNext;

    }
   return count_node;
}
NODE* GetNodeAt(int n, LIST lst) {
    if ((IsEmpty(lst)) && (n < 0) && (n > GetSize(lst))) return NULL;
    NODE* node = lst.pHead;
    int count_node = 0;
    while (node != NULL)  {
        if (count_node == n ) return node;
        count_node++;
        node = node->pNext;
    }


}
void InsertNode(LIST lst , int n , NODE* new_node) {
    NODE* node = GetNodeAt(n,lst);
   new_node->pNext = node->pNext;
   node->pNext = new_node;

}

