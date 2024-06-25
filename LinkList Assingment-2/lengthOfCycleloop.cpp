#include <iostream>
using namespace std;
class Node
{ // user defined data type
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};
class LinkList
{ // user defined data structure
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size;

    LinkList()
    {   tail=NULL;
        head  = NULL;
        size = 0;
    }

    void InsertAtHead(int value){
        Node* temp = new Node(value);
        if(size==0) head=tail=temp;
        else{
        temp->next=head;
        head=temp;
        }
        size++;
    }

    void DisplayList()
    {   if(size==0) cout<<"List is Empty\n";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
        cout<<size<<endl;
    }

    void createCycle(int indx){
        Node* tempIndx=head;
        Node* tempTail=head;
        while(tempTail->next!=NULL){
            tempTail=tempTail->next;
        }
        for(int i=1;i<indx;i++){
            tempIndx=tempIndx->next;
        }
        tempTail->next=tempIndx;
        cout<<"Link List Cycle is Created\n";
    }

    bool cycleDetection(){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }

    int loopLengthDetection(){
        int length=0;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                Node* temp=slow->next;
                length=1;
                while(temp!=fast){
                    length++;
                    temp=temp->next;
                }
                return length;
            }
        }
        return -1;
    }

};
int main()
{
    LinkList l1;
    l1.InsertAtHead(40);
    l1.InsertAtHead(30);
    l1.InsertAtHead(20);
    l1.InsertAtHead(10);
    l1.DisplayList();
    l1.createCycle(2);
    cout<<"Link List Cycle length: ";
    cout<<l1.loopLengthDetection();
    
    return 0;
}