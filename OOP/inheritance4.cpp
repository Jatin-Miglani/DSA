#include <iostream>
#include <conio.h>
using namespace std;
class A{
    public:
    int a{7};

};
class B:public A{
    public:
    int b{10};
};
class C:public A{
    public:
    int c{34};
};
class D:public B, public C{
    public:
    int d{789};
};

int main(){
    D obj;
    obj.B::b=10000;
    obj.C::c=123;
    obj.B::a=2345;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj.d<<endl;
    cout<<obj.B::a<<endl;
    cout<<obj.C::a<<endl;
    obj.b=32;
    obj.c=45;
    obj.d=67;
    obj.C::a=987;
    obj.B::a=7865;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj.d<<endl;
    cout<<obj.B::a<<endl;
    cout<<obj.C::a<<endl;
    getch();
    return 0;


}
