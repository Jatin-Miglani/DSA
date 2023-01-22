#include <iostream>
#include <conio.h>
using namespace std;
template <class T1, class T2>
class Test{
    T1 a1;
    T2 a2;
    public:
    Test(T1 x, T2 y){
        a1=x;
        a2=y;
    }
    void show(){
        cout<<a1 <<" and "<<a2<< endl;
    }
};
int main(){
    Test<int, float> obj1(12,34.67);
    obj1.show();
    getch();
    return 0;

}