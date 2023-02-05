#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Stack{
    private:
    Node *top=new Node;

    public:
    Stack(){top=NULL;}
    void CreateandCheck(string exp);
};

void Stack:: CreateandCheck(string exp){
    int size=exp.length();
    for(int i=0;i<size;i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
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
        if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(top==NULL){
                cout<<"Stack Underflow and parenthesis Unmatched."<<endl;
                return;
            }
            if(top->data-exp[i]==-1){
                //'('=40 and ')'=41
                cout<<top->data<<" Removed."<<endl;
                Node *t=top;
                top=top->next;
                delete t;
            }
            if(top->data-exp[i]==-2){
                cout<<top->data<<" Removed."<<endl;
                Node *t=top;
                top=top->next;
                delete t;
            }
        }
    }
    if(top==NULL){
        cout<<"Parenthesis Matched."<<endl;
    }
    else{
        cout<<"Not Matched."<<endl;
    }
}

int main(){
    Stack stk;
    string exp="{[a(b+c)]*{d(e+f)]/g}";
    stk.CreateandCheck(exp);
    return 0;
}