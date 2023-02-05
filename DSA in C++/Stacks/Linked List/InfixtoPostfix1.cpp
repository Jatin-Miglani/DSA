#include <iostream>
using namespace std;
class Node{
    public:
    char data;
    Node *next;
};
class Stack{
    private:
    Node *infix;
    Node *top;
    Node *postfix;

    public:
    Stack(){
        top=NULL;
        postfix=NULL;
        infix=NULL;
    }

    void Create(string exp){
        int size=exp.length();
        int prevPriority=-1;
        int priority=-1;
        Node *temp;
        for(int i=0;i<size;i++){
            if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'){
                if(exp[i]=='+'||exp[i]=='-'){
                    prevPriority=priority;
                    priority=1;
                    if(prevPriority<priority){
                        Node *temp=new Node;
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                    else if(prevPriority>=priority){
                        while(top!=NULL){
                            cout<<top->data<<"Removed."<<endl;
                            Node *d=top;
                            top=top->next;
                            d->next=postfix;
                            postfix=d;
                        }
                        Node *temp=new Node;
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                    
                }
                if(exp[i]=='*'||exp[i]=='/'){
                    prevPriority=priority;
                    priority=2;
                    if(prevPriority<priority){
                        Node *temp=new Node;
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                    else if(prevPriority>=priority){
                        while(top!=NULL){
                            cout<<top->data<<"Removed."<<endl;
                            Node *d=top;
                            top=top->next;
                            d->next=postfix;
                            postfix=d;
                        }
                        Node *temp=new Node;
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                }
                if(exp[i]=='^'){
                    prevPriority=priority;
                    priority=3;
                    if(prevPriority<priority){
                        Node *temp=new Node;
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                    else if(prevPriority>=priority){
                        while(top!=NULL){
                            cout<<top->data<<"Removed."<<endl;
                            Node *d=top;
                            top=top->next;
                            d->next=postfix;
                            postfix=d;
                        }
                        Node *temp=new Node;
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                }
            }
            else{
                Node *temp=new Node;
                temp->data=exp[i];
                temp->next=postfix;
                postfix=temp;
            }
        }
        if(top!=NULL){
            while(top!=NULL){
                cout<<top->data<<"Removed A."<<endl;
                Node *d=top;
                top=top->next;
                d->next=postfix;
                postfix=d;
            }
        }
    }

    void DisplayPostfix(){
        Node *p=postfix;
        while(p!=NULL){
            cout<<p->data;
            p=p->next;
        }
        top=p;
        cout<<endl;
    }

    void Reverse(){
        Node *p=postfix;
        Node *q=NULL;
        Node *r=NULL;
        while(p!=nullptr){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        postfix=q;
    }


};
int main(){
    Stack stk;
    string exp="a+b-c*d^g";
    stk.Create(exp);
    stk.DisplayPostfix();
    stk.Reverse();
    stk.DisplayPostfix();
    return 0;
}