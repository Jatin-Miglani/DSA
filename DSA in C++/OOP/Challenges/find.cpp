#include <iostream>
using namespace std;
class A{
    int A[5];
    int B[5];
    int count=0;
    int temp;
    public:
    void func1(){
        cout<<"Enter five 5 digit elements "<<endl;
        for(int i=0;i<5;i++){
            cout<<i+1<<" digit ";
            cin>>A[i];
        }
    }
    void func2(){
        int d;
        int temp;
        for(int i=0;i<5;i++){
            temp=A[i];
            for(int j=4;j>=0;j++){
                d=temp%10;
                B[j]=d;
                temp=int(temp/10);
            }

            
            for(int l=1;l<5;l++){
                if(B[0]==B[l]){
                    count=count+1;
                    temp=B[l];
                }
            }
            cout<<temp<<" : "<<count<<endl;
            
        }
    }
};
int main(){
    A obj;
    obj.func1();
    obj.func2();
    return 0;
}