#include<iostream>
#include<queue>
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

TreeNode* ConstructTree(int array[],int size){
    queue<TreeNode*> q;
    TreeNode* root=new TreeNode(array[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<size){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(array[i]!=INT_MIN) l=new TreeNode(array[i]);
        else l=NULL;
        if(j!=size && array[j]!=INT_MIN) r=new TreeNode(array[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
 int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    
    void nthlevel(TreeNode* root,int current_level,vector<int>& ans){
        if(root==NULL) return;
        ans[current_level]=root->value;
        nthlevel(root->right,current_level+1,ans);
        nthlevel(root->left,current_level+1,ans);
    }

int main(){
    int array[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    TreeNode* root=ConstructTree(array,n);
    vector<int> ans(level(root),0);
    nthlevel(root,0,ans);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
return 0;
}