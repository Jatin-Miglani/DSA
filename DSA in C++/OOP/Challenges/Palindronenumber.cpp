// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    int A[4];
    int B[4];
    int n1=3133;
    int n2=n1;
    
    public:
    void func1(){
        int c;
        for(int i=0;i<4;i++){
            c=n1%10;
            A[i]=c;
            n1=int(n1/10);
        }
    }
    void func2(){
        int c;
        for(int i=3;i>=0;i--){
            c=n2%10;
            B[i]=c;
            n2=int(n2/10);
        }
    }
    void print1(){
        for(int i=0;i<4;i++){
            cout<<A[i];
        }
        cout<<endl;
    }
    void print2(){
        for(int i=0;i<4;i++){
            cout<<B[i];
        }
        cout<<endl;
    }
    void check(){
        int count=0;
        for(int i=0;i<4;i++){
            if(A[i]==B[i]){
                count=count+1;
            }
        }
        if(count==4){
            cout<<"Yes :) a Plaindrome!!! "<<endl;
        }
        else{
            cout<<"Bhai galat hogya :( "<<endl;
        }
    }
};
int main(){
    A obj;
    obj.func1();
    obj.func2();
    obj.print1();
    obj.print2();
    obj.check();
    return 0;
}