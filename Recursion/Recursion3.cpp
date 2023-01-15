#include <iostream>
using namespace std;
// int pow(int m, int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return((pow(m,n-1))*m);
//     }
// }
int pow(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return(pow(m*m,n/2));
    }
    else{
        return(m*(pow(m*m,(n-1)/2)));
    }
}
int main(){
    int x=2;
    int y=9;
    cout<<pow(x,y);
    return 0;
}