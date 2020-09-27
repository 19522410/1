#include "DanhSachLienKet.h"
// Tao Node
NODE* CreateNode(DATA data){
    NODE* node = new NODE;
    if (node == NULL ) {
        return NULL;
    }
    node->data = data;
    node->pNext = NULL;
}
