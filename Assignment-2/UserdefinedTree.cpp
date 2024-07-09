#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};

class Tree{
    public:
    Node* root;

    Tree(int value){
      root=new Node(value);
    }
};

int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}

void helper(Node* root, int &diameter){
    if(root==NULL) return;
    int dia=level(root->left)+level(root->left);
    diameter=max(diameter,dia);
    helper(root->left,diameter);
    helper(root->right,diameter);
}

int Treediameter(Node* root){
    int diameter=0;
    helper(root,diameter);
    return diameter;
}

void DisplayTree(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    DisplayTree(root->left);
    DisplayTree(root->right);
}

int main(){
    Tree t1(1);
    t1.root->left=new Node(2);
    t1.root->right=new Node(3);
    t1.root->left->left=new Node(4);
    t1.root->left->right=new Node(5);
    t1.root->right->left=new Node(6);
    t1.root->right->right=new Node(7);
    DisplayTree(t1.root);
    cout<<endl;
    cout<<Treediameter(t1.root);
return 0;
}