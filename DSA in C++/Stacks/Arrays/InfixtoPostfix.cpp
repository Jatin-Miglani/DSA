#include <iostream>
using namespace std;
class Stack{
    public:
    char *A;
    char *P;
    int top=-1;
    int top1=-1;

    void Create(string exp){
        int size=exp.length();
        A=new char[size];
        P=new char[size];
        int priority=-1;
        int prevPriority=-1;
        for(int i=0;i<size;i++){
            if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'){
                if(exp[i]=='+'||exp[i]=='-'){
                    prevPriority=priority;
                    priority=1;
                    if(prevPriority<priority){
                        top++;
                        A[top]=exp[i];
                    }
                    if(prevPriority>=priority){
                        while(top!=-1){
                            top1++;
                            P[top1]=A[top];
                            cout<<A[top]<<"Removed."<<endl;
                            top--;
                        }
                        top++;
                        A[top]=exp[i];
                    }
                }
                if(exp[i]=='*'||exp[i]=='/'){
                    prevPriority=priority;
                    priority=2;
                    if(prevPriority<priority){
                        top++;
                        A[top]=exp[i];
                    }
                    if(prevPriority>=priority){
                        while(top!=-1){
                            top1++;
                            P[top1]=A[top];
                            cout<<A[top]<<"Removed."<<endl;
                            top--;
                        }
                        top++;
                        A[top]=exp[i];
                    }
                }
                if(exp[i]=='^'){
                    prevPriority=priority;
                    priority=3;
                    if(prevPriority<priority){
                        top++;
                        A[top]=exp[i];
                    }
                    if(prevPriority>=priority){
                        while(top!=-1){
                            top1++;
                            P[top1]=A[top];
                            cout<<A[top]<<"Removed."<<endl;
                            top--;
                        }
                        top++;
                        A[top]=exp[i];
                    }
                }
            }
            else{
                top1++;
                P[top1]=exp[i];
            }
        }
        if(top!=-1){
            while(top!=-1){
                cout<<A[top]<<"Removed.A"<<endl;
                top1++;
                P[top1]=A[top];
                top--;
            }
        }
    }

    void Display(){
        for(int i=0;i<top1+1;i++){
            cout<<P[i];
        }
        cout<<endl;
    }

};
int main(){
    Stack stk;
    string exp="a+b-c*d^g";
    stk.Create(exp);
    stk.Display();
    return 0;
}
