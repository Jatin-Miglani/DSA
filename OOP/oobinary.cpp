#include <iostream>
using namespace std;
class A{
    int real;
    int imaginary;
    public:
    void input(){
        int a;
        int b;
        cout<<"Enter real part ";
        cin>>a;
        cout<<"Enter imaginary part ";
        cin>>b;
        real=a;
        imaginary=b;
    }

    A operator +(A obj){
        A temp;
        temp.real=real+obj.real;
        temp.imaginary=imaginary+obj.imaginary;
        return temp;
    }

    void print(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};

int main(){
    A obj1,obj2,result;
    obj1.input();
    obj2.input();
    result=obj1+obj2;
    result.print();
    return 0;
}