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
    {
        head = tail = NULL;
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

    void InsertAtIndx(int indx, int value){
        if(indx==0) InsertAtHead(value);
        else if(indx==size) InsertAtTail(value);
        else if(indx<0 ||indx>size) cout<<"Invalid Input"<<endl; 
        else{
            Node* t=new Node(value);
            Node* temp=head;
            for(int i=1;i<=indx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    void InsertAtTail(int value)
    {
        Node *temp = new Node(value);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void getElement(int indx){
        Node* temp=head;
        if(indx==0) cout<< head->value;
        if(indx==size-1) cout<<tail->value;
        for(int i=1;i<indx;i++){
            temp=temp->next;
        }
        cout<<temp->value<<endl;

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

    void DeleteAtHead(){
        if(size==0) cout<<"List is Empty\n";
        else if(size==1) {
            head=tail=NULL;
            size--;
        }
        else{
            head=head->next;
            size--;
        }
    }

    void DeleteAtIndx(int indx){
       if(size==0){cout<<"list is Empty";
       return;} 
       if(indx==size-1) DeleteAtTail();
       if(indx==1) DeleteAtHead();
       Node* temp=head;
        for(int i=1;i<=indx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
    
    void DeleteAtTail(){
       Node* temp=head;
       for(int i=1;i<size-1;i++){
        temp=temp->next;
       }
       temp->next=NULL;
       tail=temp;
       size--;
    }

};
int main()
{
    LinkList l1;
    l1.InsertAtTail(10);
    l1.InsertAtTail(20);
    l1.InsertAtHead(30);
    l1.InsertAtIndx(3,40);
    l1.DisplayList();
    l1.getElement(2);
    l1.DeleteAtIndx(2);
    l1.DisplayList();
    
    return 0;
}