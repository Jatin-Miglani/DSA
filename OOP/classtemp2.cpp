#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
class Calculator{
    private:
    T n1;
    T n2;
    public:
    Calculator(T p1, T p2){
        n1=p1;
        n2=p2;
    }
    void displayResult(){
        cout<<"Addition "<<Add()<<endl;
        cout<<"Subtraction "<<Sub()<<endl;
        cout<<"Multiplication "<<Mul()<<endl;
        cout<<"Division "<<Div()<<endl;
    }

    T Add(){
        return(n1+n2);
    }
    T Sub(){
        return(n1-n2);
    }
    T Mul(){
        return(n1*n2);
    }
    T Div(){
        return(n1/n2);
    }

};

int main(){
    Calculator<int> obj1(64,5);
    obj1.displayResult();
    Calculator<float> obj2(12.9,4.0);
    obj2.displayResult();
    getch();
    return 0;
}