#include <iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *Q;

    void Create(){
        cout<<"Enter the size of array ";
        cin>>size;
        Q=new int[size];
        front=rear=-1;
    }

    void Enqueue(int x){
        
        if(rear==size-1 && front==-1){
            cout<<"No Addition, Queue is FULL."<<endl;
            return;
        }
        if(rear==front && rear!=-1 && front!=-1){
            cout<<"No Addition, Queue is FULL."<<endl;
            return;
        }
        if(rear==size-1){
            rear=-1;
            rear++;
            Q[rear]=x;
            cout<<rear<<" "<<front<<endl;
        }
        else{
            rear++;
            Q[rear]=x;
            cout<<rear<<" "<<front<<endl; 
        }
    }

    int Dequeue(){
    
        int x=-1;
        if(front==-1 && rear==-1){
            cout<<"Nothing to delete."<<endl;
            return 0;
        }
        if(front==size-1){
            front=-1;
            front++;
            x=Q[front];
            Q[front]=0;
            cout<<rear<<" "<<front<<endl;
            return x;
        }
        else{
            front++;
            x=Q[front];
            Q[front]=0;
            cout<<rear<<" "<<front<<endl;
            if(front==rear){
                front=-1;
                rear=-1;
            }
            return x;
        }
    }

    void Display(){
        for(int i=0;i<size;i++){
            cout<<Q[i]<<"|";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    q.Create();
    for(int i=0;i<q.size;i++){
        cout<<"Enter x.";
        int x=0;
        cin>>x;
        q.Enqueue(x);
    }
    q.Display();
    q.Dequeue();
    q.Display();
    q.Dequeue();
    q.Display();
    q.Enqueue(3);
    q.Display();
    q.Dequeue();
    q.Display();
    q.Enqueue(4);
    q.Display();
    q.Dequeue();
    q.Display();
    q.Dequeue();
    q.Display();
    q.Enqueue(5);
    q.Display();
    q.Enqueue(6);
    q.Display();
    q.Enqueue(7);
    q.Display();
    q.Dequeue();
    q.Display();
    return 0;
}
