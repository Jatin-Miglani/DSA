#include <iostream>
using namespace std;
class A{
    int n;
    int A[];
    int avail[];

    public:
    void func1(){
        cout<<"Enter the size of the array ";
        int size;
        cin>>size;
        n=size;
    }

    void Push(){
        for(int i=n-1; i>=0; i--){
            cout<<"Please Enter the Element ";
            cin>>A[i];
        }
    }

    void Pop(){
        for(int i=n-1;i>=0;i--){
            avail[i]=A[i];
            A[i]=0;
        }
    }

    void print(){
        for(int i=0; i<n; i++){
            cout<<A[i]<<endl;
        }
    }
};

int main(){
    A obj;
    obj.func1();
    obj.Push();
    obj.print();
    obj.Pop();
    obj.print();
    return 0;
}