#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Stack{
    Node *top;
    public:
    Stack(){
        top=NULL;
    }
    void Push(int x);
    int pop();
    void Display();
};

void Stack::Push(int x){
    Node *t=new Node;
    if(t==NULL){
        cout<<"Stack is Full "<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int Stack::pop(){
    int x=-1;
    if(top==NULL){
        cout<<"Stack is Empty "<<endl;

    }
    else{
        Node *temp=top;
        x=temp->data;
        top=top->next;
        cout<<x<<endl;
    }
}

void Stack::Display(){
    Node *p=top;
    while(p){
        cout<<"|"<<p->data<<"|"<<endl;
        p=p->next;
    }
}

int main(){
    Stack stk;
    for(int i=0;i<5;i++){
        int x;
        cout<<"enter x ";
        cin>>x;
        stk.Push(x);
    }
    stk.Display();
    stk.pop();
    stk.Display();
    return 0;

}