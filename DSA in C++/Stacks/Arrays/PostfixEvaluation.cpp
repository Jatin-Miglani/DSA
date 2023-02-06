#include <iostream>
using namespace std;
class Stack{
    public:
    string *A;
    int top=-1;
    string sum;

    void Create(string exp){
        int size=exp.length();
        A=new string[size];
        for(int i=0;i<size;i++){
            if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'){
                string temp1=A[top];
                top--;
                string temp2=A[top];
                top--;
                string p=temp2+exp[i]+temp1;
                sum='('+p+')';
                top++;
                A[top]=sum;
            }
            else{
                top++;
                A[top]=exp[i];
            }
        }
        if(top!=-1){
            while(top!=-1){
                cout<<A[top]<<" is the Result."<<endl;
                top--;
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