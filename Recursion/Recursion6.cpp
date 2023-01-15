#include <iostream>
using namespace std;
int sin(int x,int n){
    static int p=(1/x);
    static int f=(1/2);
    int sum=0;

    if(n==0){
        return sum;
    }

    else{
        sum=sin(x,n-1);
        if(n%2==0){
            p=-(p*(x*x));
        }
        else{
            p=p*(x*x);
        }
        f=f*(n+1)*(2*(n)-1);

        return(sum+(p/f));
    }
}
int main(){
    int a=2;
    int b=10;
    cout<<sin(a,b);
}