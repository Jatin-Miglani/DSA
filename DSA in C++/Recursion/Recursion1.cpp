#include <iostream>
using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return(sum(n-1)+n);
//         }
// }

// int sum(int n){
//     return((n*(n+1))/2);
// }

int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int x=5;
    cout<<sum(x);
    return 0;
}