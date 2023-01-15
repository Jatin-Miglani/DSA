#include <iostream>
using namespace std;
int Fact(int n){
    if(n>=0 && n<=1){
        return 1;
    }
    else{
        return((Fact(n-1))*n);
    }
}
int main(){
    int x=6;
    cout<<Fact(x);
    return 0;
}