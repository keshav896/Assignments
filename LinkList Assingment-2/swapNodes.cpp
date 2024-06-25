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

    Node* swapNodes(int k) {
        Node* first=head;
        Node* second=head;
        Node* temp=head;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        first=temp;
        while(temp->next!=NULL){
            temp=temp->next;
            second=second->next;
        }
        swap(first->value,second->value);
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
    l1.insertion(5);
    l1.insertion(9);
    l1.insertion(6);
    l1.insertion(13);
    l1.insertion(1);
    l1.insertion(10);
    l1.displayList();
    l1.swapNodes(3);
    l1.displayList();
return 0;
}