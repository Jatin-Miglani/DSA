#include <iostream>
using namespace std;
int fun1(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun1(fun1(n+11));
    }
}
int main(){
    int x=95;
    cout<<fun1(x);
}