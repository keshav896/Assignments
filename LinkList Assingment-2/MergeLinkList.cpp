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
void mergeInBetween(Node* listhead, int a, int b, Node* list2) {
       Node* tempA=listhead;
       //iterate tempA from head to ath position
       for(int i=1;i<a;i++){
        tempA=tempA->next;
       }
       Node* tempB=tempA;
       //iterate tempA from a to bth position
       for(int i=a;i<=b+1;i++){
        tempA=tempA->next;
       }
       tempB->next=list2;
       while(tempB->next!=NULL){
        tempB=tempB->next;
       }
       tempB->next=tempA;

       Node* temp=listhead;
        cout<<"Modified Link List: ";
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
int main(){
    LinkList l1;
    LinkList l2;
    l1.insertion(5);
    l1.insertion(9);
    l1.insertion(6);
    l1.insertion(13);
    l1.insertion(1);
    l1.insertion(10);
    l1.displayList();
    l2.insertion(1000002);
    l2.insertion(1000001);
    l2.insertion(1000000);
    l2.displayList();
    mergeInBetween(l1.head,3,4,l2.head);
return 0;
}