
#include <iostream>
using namespace std;
struct TNode
{
    int data;
    TNode* left;
    TNode* right;

};
typedef TNode* Tree;
TNode* CreateNode(int x)
{
    TNode* q = new TNode;
    q->data = x;
    q->left = NULL;
    q->right = NULL;
    return q;
}
void InsertTree(Tree& root, int x)
{

    if (root != NULL)
    {
        if (root->data < x) InsertTree(root->right, x);
        else if (root->data > x) InsertTree(root->left, x);
    }
    if (root == NULL)
    {
    root = new TNode;
    root->data = x;
    root->right = NULL;
    root->left = NULL;
    }   
}
void Trave(Tree root)
{
    if (root!=NULL)
    {
        
        Trave(root->right);
        Trave(root->left);
        cout << root->data << " ";
    }
    if (root == NULL) return;
   
}
int d = 0;
void Count1(Tree root)
{   
    if (root == NULL) return;
    if ((root->left != NULL) && (root->right == NULL))
    {
        d++;
        Count1(root->left);
    }
    if ((root->left == NULL) && (root->right != NULL))
    {
        d++;
        Count1(root->right);
    }
    if ((root->left != NULL) && (root->right != NULL))
    {
        Count1(root->left);
        Count1(root->right);
    } 
}
int max(int a, int b)
{
    if(a > b) return a;
     return b;
}
int High0fTree(Tree root)
{
    if (root == NULL) return -1;
    
    else
    {
        int l = High0fTree(root->left);
        int r = High0fTree(root->right);
        return 1+ max(l, r);
    }

}
void NodeHighest(Tree root)
{ 
    if ((root->left == NULL) && (root->right == NULL)) cout<< root->data;
    else
    {
        int l = High0fTree(root->left);
        int r = High0fTree(root->right);
        if (l > r) NodeHighest(root->left);
        if (r > l) NodeHighest(root->right);
        if (l == r)
        {
            NodeHighest(root->left);
            NodeHighest(root->right);
        }
    }
}
int main()
{
    int a[100], n;
    TNode* root = new TNode;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    root = NULL;
    for (int i = 0; i < n; i++)
    {
        InsertTree(root, a[i]);
    }
    Trave(root);
    cout << endl;
    cout << High0fTree(root);
    cout << endl;
    NodeHighest(root);
    return 0;
}