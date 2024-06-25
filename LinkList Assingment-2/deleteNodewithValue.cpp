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

    void displayList(){
        Node* temp=head;
        cout<<"Link List: ";
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    Node* removeDuplicate(int val){
        // if(head==NULL) return NULL;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL){
            if(temp->value==val){
                prev->next=temp->next;
                prev=temp;
                temp=temp->next;
            }else{
                prev=temp;
                temp=temp->next;
            }
           
        }
        return head;
    }
};

int main(){
    LinkList l1;
    // l1.insertion(6);
    l1.insertion(5);
    l1.insertion(4);
    l1.insertion(3);
    l1.insertion(6);
    l1.insertion(2);
    l1.insertion(1);
    l1.displayList();
    cout<<l1.removeDuplicate(6);
    cout<<endl;
    l1.displayList();
return 0;
}