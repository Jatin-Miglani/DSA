#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class Node{
    public:
    char data;
    Node *next;
};
class Stack{
    Node *top=new Node;
    char *A;
    public:
    Stack(){
        top=NULL;
    }

    void CreateandCheck(string exp);
};

void Stack:: CreateandCheck(string exp){
    int size=exp.length();
    A=new char[size];
    for(int i=0;i<size;i++){
        if(exp[i]=='('){
            Node *temp=new Node;
            if(temp==NULL){
                cout<<"Stack Overflow."<<endl;
            }
            else{
                temp->data=exp[i];
                temp->next=top;
                top=temp;
            }
            
        }
        else if(exp[i]==')'){
            if(top==NULL){
                cout<<"Stack Empty and Parenthesis not Matching."<<endl;
                return;
            }
            else{
                Node *t=top;
                cout<<t->data<<" Removed."<<endl;
                top=top->next;
                delete t;
            }
        }
    }
    if(top!=NULL){
        cout<<"Parenthesis Not matching."<<endl;
    }
    if(top==NULL){
        cout<<"Parenthesis Matched.-_-"<<endl;
    }
}

int main(){
    Stack stk;
    string exp=")((a+b)*(c+d))";/*{'(','a','+','b',')','*','(','c','+','d',')','/0'};*/
    int n1=exp.length();
    for(int i=0;i<n1;i++){
        cout<<exp[i]<<endl;
    }
    stk.CreateandCheck(exp);
    return 0;
}