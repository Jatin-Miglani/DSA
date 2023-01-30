#include <iostream>
using namespace std;
int fun1(int y);
int fun2(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n/2);
    }
    return 0;
}

int fun1(int y){
    if(y>0){
        cout<<y<<endl;
        fun2(y-1);
    }
    return 0;
}

int main(){
    int x=20;
    fun1(x);
    return 0;
}