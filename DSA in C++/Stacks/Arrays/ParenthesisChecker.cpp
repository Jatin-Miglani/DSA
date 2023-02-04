#include <iostream>
using namespace std;
class Stack{
    string *A;
    int top=-1;

    public:
    void CreateandCheck(string exp){
        int size=exp.length();
        A=new string[size];
        for(int i=0;i<size;i++){
            if(exp[i]=='('){
                if(top==size-1){
                    cout<<"Stack Overflow."<<endl;
                }
                else{
                    top++;
                    A[top]=exp[i];
                }
            }
            if(exp[i]==')'){
                if(top==-1){
                    cout<<"Stack Underflow and Parenthesis Unmatched."<<endl;
                    return;
                }
                else{
                    cout<<A[top]<<" Removed."<<endl;
                    top--;
                }
            }
        }
        if(top==-1){
            cout<<"Parenthesis Matched.-_-"<<endl;
        }
        else{
            cout<<"Parenthesis Unmatched.:)"<<endl;
        }
    }
};

int main(){
    Stack stk;
    string exp="(a+b)*(c+d))";
    stk.CreateandCheck(exp);
    return 0;
}