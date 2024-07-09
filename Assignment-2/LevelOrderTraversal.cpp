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

int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void levelOrderTraversal(TreeNode* root,int target,int current_level){
   if(root==NULL) return;
   if(current_level==target){
    cout<<root->value<<" ";
    return;
   }
   levelOrderTraversal(root->right,target,current_level+1);
   levelOrderTraversal(root->left,target,current_level+1);
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

    int levels=level(a);
    for(int i=1;i<=levels;i++){
    levelOrderTraversal(a,i,1);
    cout<<endl;
    }

  
     
return 0;
}