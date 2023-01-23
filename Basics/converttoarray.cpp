#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class A{
    string s1="Hello";
    int size;
    char A[];
    public:
    void func1(){
        size=s1.length();
    }
    void func2(){
        for(int i=0;i<size;i++){
            A[i]=s1[i];
        }
    }
    void print(){
        cout<<"[ ";
        for(int i=0;i<size;i++){
            cout<<A[i]<<",";
        }
        cout<<" ]"<<endl;
    }
};
int main(){
    A obj;
    obj.func1();
    obj.func2();
    obj.print();
    return 0;
}