#include <iostream>
using namespace std;
class Node{
    public:
    string data;
    Node *next;
};
class Stack{
    private:
    Node *Postfix;
    string sum;
    string total;
    
    public:
    Stack(){
        Postfix=NULL;
    }

    void Create(string exp){
        exp=exp+')';
        int size=exp.length();
        for(int i=0;i<size-1;i++){
            if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'){
                Node *t1=Postfix;
                string temp1=Postfix->data;
                Postfix=Postfix->next;
                delete t1;
                Node *t2=Postfix;
                string temp2=Postfix->data;
                Postfix=Postfix->next;
                delete t2;
                cout<<temp1<<endl<<temp2<<endl<<exp[i]<<endl;
                cout<<"_______________"<<endl;
                string p=temp2+exp[i]+temp1;
                cout<<p<<endl;
                cout<<"_______________"<<endl;
                sum='('+p+')';
                Node *temp3=new Node;
                temp3->data=sum;
                temp3->next=Postfix;
                Postfix=temp3;
            }
            else{
                Node *temp=new Node;
                temp->data=exp[i];
                temp->next=Postfix;
                Postfix=temp;
            }
        }
        if(Postfix!=NULL){
            while(Postfix!=NULL){
                total=Postfix->data;
                cout<<Postfix->data<<" is the result."<<endl;
                Node *d=Postfix;
                Postfix=Postfix->next;
                delete d;
            }
        }
    }
};
int main(){
    Stack stk;
    string exp="562+*42/-";
    stk.Create(exp);
    return 0;
}