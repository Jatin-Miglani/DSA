#include <iostream>
#include <conio.h>
using namespace std;
class Base{
    public:
    void print(){
        cout<<"Base"<<endl;
    }
};
class Derived: public Base{
    public:
    void print(){
        cout<<"Parent"<<endl;
    }
};
int main(){
    Derived obj;
    obj.print();
    obj.Base::print();
    return 0;
}