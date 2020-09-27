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
NODE* CreateNode(DATA);
