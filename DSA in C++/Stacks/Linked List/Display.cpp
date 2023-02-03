#include <iostream>
using namespace std;
class Stack{
    public:
    int data;
    Stack *next;
    Stack *Top;
    int top=-1;

    void Create(){
        Top=new Stack;
        Top->data=40404;
        Top->next=nullptr;
    }

    void push(int x){
        top++;
        Stack *temp= new Stack;
        if(temp==NULL){
            cout<<"Stack Overflow "<<endl;
        }
        else{
            temp->data=x;
            temp->next=Top;
            Top=temp;
        }
    }

    void DisplayLL(){
        Stack *p=Top;
        while(p->next){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }

    void Display(){
        Stack *p=Top;
        while(p->next){
            cout<<"|"<<p->data<<"|"<<endl;
            p=p->next;
        }
    }

    int pop(){
        
        int x=-1;
        if(Top->next==nullptr){
            cout<<"STack Underflow "<<endl;
            return x;
        }
        else{
            Stack *p=Top;
            x=p->data;
            Top=Top->next;
            delete p;
            return x;
        }
    }
};
int main(){
    Stack  s;
    s.Create();
    for(int i=0;i<5;i++){
        int x=0;
        cout<<"Enter x ";
        cin>>x;
        s.push(x);
    }
    s.Display();
    s.DisplayLL();
    cout<<"The deleted element is "<<s.pop()<<endl;
    s.Display();
    cout<<"The deleted element is "<<s.pop()<<endl;

    s.Display();
    return 0;
}
