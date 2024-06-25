#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};

class LinkList{
    public:
    int size;
    Node* head;

    LinkList(){
        int size=0;
        head=NULL;
    }

    void insertion(int value){
        Node* temp=new Node(value);
        temp->next=head;
        head=temp;
        size++;
    }

     Node* deleteMiddleNode(){
        Node* slow=head;
        Node* fast=head;
        int middle=0;
        if(fast->next==NULL) return head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            middle++;
        }
       Node* temp=head;
       for(int i=1;i<middle;i++){
        temp=temp->next;
       }
        temp->next=temp->next->next;
        return head;
    }

    void displayList(){
        Node* temp=head;
        cout<<"Link List: ";
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkList l1;
    l1.insertion(70);
    l1.displayList();
    cout<<l1.deleteMiddleNode()<<endl;
    l1.displayList();
return 0;
}