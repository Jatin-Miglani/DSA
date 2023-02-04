#include <iostream>
#include <conio.h>
using namespace std;
class A{
    public:
    void display(){
        cout<<"Hello this is Class A"<<endl;
    }
};
class B: public A{
    public:
    void dispaly(){
        cout<<"Hello! Now this is class B"<<endl;
        
    }
};
int main(){
    B obj;
    obj.B::display();
    return 0;
}