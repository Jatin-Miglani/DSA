#include <iostream>
#include <conio.h>
using namespace std;
class A{
    public:
    int a=10;
};
class B: virtual public A{
    public:
    int b=45;
};
class C: virtual public A{
    public:
    int c=89;
};
class D: public B,public C{
    public:
    int d=34;
};
int main(){
    D obj;
    cout<<obj.a<<endl;
    getch();
    return 0;
}