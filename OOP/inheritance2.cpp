#include <iostream>
#include <conio.h>
using namespace std;
class A{
    int a{2};
    int b{4};
    protected:
    int Mul(){
        int c=a*b;
        return c;
    }
};
class B: private A{
    public:
    void print(){
        cout<<Mul()<<endl;
    }
};

int main(){
    B obj;
    obj.print();
    getch();
    return 0;
}