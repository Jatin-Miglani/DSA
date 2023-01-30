#include <iostream>
using namespace std;
// int F[10];
// int fib(int n){
//     if(n<=1){
//         F[n]=n;
//         return n;
//     }
//     if(F[n]!=-1){
//         return F[n];
//     }
//     else{
//         F[n]=fib(n-2)+fib(n-1);
//         return F[n];  
//     }
// }
int fib(int n){
    int t0=0;
    int t1=1;
    int s=0;
    // if(n<=1){
    //     return n;
    // }
    
    for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }

    return s;
}
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     else{
//         return(fib(n-2)+fib(n-1));
//     }
// }
int main(){
    // for(int i=1;i<=10;i++){
    //     F[i]=-1;
    // }
    int x=5;
    cout<<fib(x);
    return 0;
}