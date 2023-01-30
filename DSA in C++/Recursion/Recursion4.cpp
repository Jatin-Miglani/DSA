#include <iostream>
using namespace std;
// double e(double x,double n){
//     static double p=1;
//     static double f=1;
//     double sum=0;
//     if(n==0){
//         return 1;
//     }
//     else{
//         sum=e(x,n-1);
//         p=p*x;
//         f=f*n;
//         return(sum+(p/f));
//     }
// }

double e(double x, double n){
    static double s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+(x/n)*(s);
        return e(x,n-1);
    }
}
int main(){
    double a=2;
    double b=10;
    cout<<e(a,b);
    return 0;
}