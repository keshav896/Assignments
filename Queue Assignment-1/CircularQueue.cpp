#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    vector<int> array;
    int front;
    int rear;
    int size;
    int Capacity;

    Queue(int Capacity){
    vector<int> v(this->Capacity=Capacity);
    front=0;
    rear=0;
    size=0;
    array=v;
    }

    void push(int value){
       if(size==Capacity){
        cout<<"Queue is Full"<<endl;
        return;
       }
       array[rear]=value;
       size++;
       rear++;
       if(rear==Capacity) rear=0;
    }

    void pop(){
        if(front-rear==0){
            cout<<"Queue is Empty"<<endl;
            return;
        } 
        front++;
        if(front==Capacity) front=0;
        size--;
    }
    
    int front_element(){
        if(size==0){
            return -1;
        } 
        return array[front];
    }

    int back(){
        if(size==0){
            return -1;
        } 
        return array[rear-1];
    }

    int Queue_size(){
        return size;
    }

    bool empty(){
        if(size==0) return true;
        else return false;
    }

    void display(){
        for(int i=front;i<rear;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    cout<<q.front_element()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.display();
    cout<<q.front_element()<<endl;
    cout<<q.back()<<endl;


return 0;
}