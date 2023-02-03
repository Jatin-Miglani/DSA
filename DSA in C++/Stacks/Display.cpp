#include <iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *S;

    void Create(){
        cout<<"Enter the size of array ";
        cin>>size;
        S=new int[size];
        top=-1;
    }

    void push(int x){
        if(top==size-1){
            cout<<"Overflow - Stack is Full ";

        }
        else{
            top++;
            S[top]=x;
        }
    }

    void peek(int a){
        a=top-a+1;
        cout<<S[a]<<endl;
    }

    void Display(){
        for(int i=0;i<top+1;i++){
            cout<<"|"<<S[top+1-i-1]<<"|"<<endl;
        }
    }
    
    int Pop(){
        int x;
        if(top==-1){
            cout<<"Underflow - Stack empty"<<endl;
            x=-1;
        }
        else{
            x= S[top];
            top--;
        }
        return x;
    }
};
int main(){
    Stack s;
    s.Create();
    for(int i=0;i<s.size;i++){
        int x;
        cout<<"Enter x";
        cin>>x;
        s.push(x);
    }
    for(int i=0;i<s.size;i++){
        s.peek(i+1);
    }
    s.Display();
    cout<<"Pop operation goes by____________________________________________________"<<endl;
    s.Pop();
    s.Display();
    return 0;
}
