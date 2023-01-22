#include <iostream>
#include <conio.h>
using namespace std;
template <class T, int N>
class mysequence{
    T memblock[N];
    public:
    void setmember(int x, T value);
    T getmember(int x);
};

template <class T, int N>
void mysequence<T,N>::setmember(int x, T value){
    memblock[x]=value;
}

template <class T, int N>
T mysequence<T,N>::getmember(int x){
    return memblock[x];
}

int main(){
    mysequence<int,5> obj1;
    obj1.setmember(3,45);
    cout<<obj1.getmember(3);
    getch();
    return 0;
}