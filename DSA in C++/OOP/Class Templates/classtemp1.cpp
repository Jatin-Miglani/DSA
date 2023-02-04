#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
void Rev(T &n1, T &n2){
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main(){
    int i1,i2;
    cout<<"Enter i1 and i2 ";
    cin>>i1>>i2;

    Rev<int>(i1,i2);

    cout<<"i1 now is "<<i1<<endl;
    cout<<"i2 now is "<<i2<<endl;

    return 0;
}