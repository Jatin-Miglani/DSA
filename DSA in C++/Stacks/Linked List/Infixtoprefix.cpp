#include <iostream>
using namespace std;
class Node{
    public:
    int priority;
    char data;
    Node *next;
};
class Stack{
    private:
    Node *top;
    Node *prefix;

    public:
    Stack(){
        top=NULL;
        prefix=NULL;
    }

    void Create(string exp){
        int size=exp.length();
        for(int i=size-1;i>=0;i--){
            cout<<exp[i];
        }
        cout<<endl;
        for(int i=size-1;i>=0;i--){
            if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'){
                if(exp[i]=='+'||exp[i]=='-'){
                    Node *temp=new Node;
                    temp->priority=1;
                    if(top!=NULL && top->priority>temp->priority){
                        while(top->priority>temp->priority && top!=NULL){
                            Node *d=top;
                            cout<<top->data<<"Removed.+"<<endl;
                            top=top->next;
                            d->next=prefix;
                            prefix=d;
                        }
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                    else{
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }

                }
                if(exp[i]=='*'||exp[i]=='/'){
                    Node *temp=new Node;
                    temp->priority=2;
                    if(top->priority>temp->priority && top!=NULL){
                        while(top->priority>temp->priority && top!=NULL){
                            Node *d=top;
                            cout<<top->data<<"Removed.*"<<endl;
                            top=top->next;
                            d->next=prefix;
                            prefix=d;
                        }
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                    else{
                        
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }

                }
                if(exp[i]=='^'){
                    Node *temp=new Node;
                    temp->priority=3;
                    if(top->priority>temp->priority && top!=NULL){
                        while(top->priority>temp->priority && top!=NULL){
                            Node *d=top;
                            cout<<top->data<<"Removed.^"<<endl;
                            top=top->next;
                            d->next=prefix;
                            prefix=d;
                        }
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }
                    else{
                        temp->data=exp[i];
                        temp->next=top;
                        top=temp;
                    }

                }
            }
            else{
                cout<<"Added"<<endl;
                Node *temp=new Node;
                temp->data=exp[i];
                temp->next=prefix;
                prefix=temp;
            }
        }
        if(top!=NULL){
            while(top!=NULL){
                Node *d=top;
                cout<<top->data<<"Removed.A"<<endl;
                top=top->next;
                d->next=prefix;
                prefix=d;
            }
        }
    }
    void Display(){
        Node *p=prefix;
        while(p!=NULL){
            cout<<p->data;
            p=p->next;
        }
        cout<<endl;
    }
};
int main(){
    Stack stk;
    string exp="a+b*c^d/e+f";
    stk.Create(exp);
    stk.Display();
    return 0;
}
