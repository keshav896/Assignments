#include<iostream>
#include<cmath>
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
int Minimumvalue(TreeNode* root){
    if(root==NULL) return INT_MAX;
    return min(root->value,min(Minimumvalue(root->left),Minimumvalue(root->right)));
}

void DisplayTree(TreeNode* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    DisplayTree(root->left);
    DisplayTree(root->right);
}
int main(){
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(-2);
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
    cout<<"\nMinimum Value : "<<Minimumvalue(a);
   
return 0;
}