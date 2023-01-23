#include <iostream>
using namespace std;
class A{
    int n;
    public:
    void declare(){
        cout<<"Enter the size of array ";
        int size;
        cin>>size;
        n=size;
    }
    int A[];
    void ask(){
        for(int i=0;i<n;i++){
            cout<<"Enter the "<<i+1<<" element " ;
            cin>>A[i];
        }
    }
    void smallest(){
        int temp;
        for(int i=0;i<n;i++){
            if(A[i]<A[i+1]){
                temp=A[i];
                A[i+1]=temp;
                A[i]=A[i+1];
            }

        }
        cout<<"The smallest number in array is "<<temp<<endl;
    }
    void largest(){
        int larg;
        for(int i=0;i<n;i++){
            if(A[i]>A[i+1]){
                larg=A[i];
                A[i+1]=larg;
                A[i]=A[i+1];
            }
        }
        cout<<"The largest number in the array is "<<larg<<endl;
    }
};
int main(){
    A obj;
    obj.declare();
    obj.ask();
    //apply one object at a time below 
    obj.smallest();
    //obj.largest();
    return 0;
}