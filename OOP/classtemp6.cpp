#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
class Churail{
    T a;
    T b;
    T c;
    public:
    T min(T n1,T n2);
    T min(T n1, T n2, T n3);
};

template <class T>
T Churail<T>::min(T n1, T n2){
        a=n1;
        b=n2;
        return(a>b)?a:b;
    };

template <class T>
T Churail<T>::min(T n1, T n2, T n3){
        a=n1;
        b=n2;
        c=n3;
        return((a>b)?(a>c)?a:c:(b>c)?b:c);
    }

int main(){
    Churail<int> obj1;
    cout<<obj1.min(23,45)<<endl;
    cout<<obj1.min(43,67,19)<<endl;
    getch();
    return 0;
}
