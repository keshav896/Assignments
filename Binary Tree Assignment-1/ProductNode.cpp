#include<iostream>
using namespace std;
class TreeNode{
    public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};
int ProductNode(TreeNode* root){
    if(root==NULL) return 1;
    return root->value*ProductNode(root->left)*ProductNode(root->right);
    
}

void DisplayTree(TreeNode* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    DisplayTree(root->left);
    DisplayTree(root->right);
}
int main(){
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(4);
    TreeNode* e=new TreeNode(5);
    TreeNode* f=new TreeNode(6);
    TreeNode* g=new TreeNode(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    DisplayTree(a);
    cout<<"\nProduct of Node value: ";
    cout<<ProductNode(a);
     
return 0;
}