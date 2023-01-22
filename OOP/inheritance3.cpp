#include <iostream>
#include <conio.h>
using namespace std;
class A{
    int a=10;
    int b=2;
    public:
    int division(){
        return(a/b);
    }
    protected:
    int c=110;
    int multiply(){
        return a*b*c;
    }
};
class B {
    public:
    void display(){
        cout<<"Hello bro Class B is working on now!!"<<endl;
    }
};
class C: private A, private B{
    public:
    void print(){
        cout<<division()<<endl;
        cout << multiply() << endl;
        display();
    }
};
int main(){
    C obj;
    obj.print();
    //obj.a=20; is not possible bcoz it is declared in private over there
    
    getch();
    return 0;
}