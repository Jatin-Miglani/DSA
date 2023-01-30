#include <iostream>
#include <conio.h>
using namespace std;
class A{
    private:
    void printpri(){
        int a {24};
        cout<<a;
    }
    public:
    void print(){
        int b{23};
        cout<<b;
    }
    protected:
    void printpro(){
        int c{89};
        cout<<c;
    }

};

class B: public A{

};

int main(){
    B obj;
    obj.print();
    getch();
    return 0;
}