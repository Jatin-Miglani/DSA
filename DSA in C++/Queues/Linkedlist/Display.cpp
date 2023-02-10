#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Queue{
    private:
    Node *front;
    Node *Rear;

    public:
    Queue(){
        Rear=NULL;
        front=NULL;
        front=Rear;
    }

    void EnQueue(int x){
        Node *temp=new Node;
        if(temp==NULL){
            cout<<"Queue is Full."<<endl;
            cout<<"."<<endl;
            return;
        }
        else{
            temp->data=x;
            temp->next=nullptr;
            if(Rear==NULL){
                front=temp;
                Rear=temp;  
            }
            else{
                Rear->next=temp;
                Rear=temp;
            }
        }
    }

    int DeQueue(){
        if(Rear==NULL){
            cout<<"Queue is Empty."<<endl;
            return -1;
        }
        else{
            int x=-1;
            x=front->data;
            front=front->next;
            return x;
        }
    }
    
    void Display(){
        Node *p=front;
        while(p){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }
};
int main(){
    Queue q;
    for(int i=0;i<5;i++){
        int x=0;
        cout<<"Enter x";
        cin>>x;
        q.EnQueue(x);
    }
    q.Display();
    cout<<"_________________________"<<endl;
    q.DeQueue();
    q.Display();
    q.EnQueue(15);
    q.Display();
    q.DeQueue();
    q.Display();
    return 0;
}