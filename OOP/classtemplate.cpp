#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
T large(T n1, T n2){
    return(n1>n2)?n1:n2;
}
int main(){
    int i1,i2;
    float f1,f2;
    char c1,c2;

    cout<<"Enter two integers ";
    cin>>i1>>i2;
    cout<<large<int>(i1,i2)<<endl;

    return 0;
}