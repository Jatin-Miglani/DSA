#include <iostream>
using namespace std;
// int C(int n,int r){
//     if(r==0||r==n){
//         return 1;
//     }
//     else{
//         return(C(n-1,r-1)+C(n-1,r));
//     }
// }

// int C(int n,int r);
// int Fact(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return(Fact(n-1)*n);
//     }
// }
// int C(int n,int r){
//     int t1=Fact(n);
//     int t2=Fact(r);
//     int t3=Fact(n-r);
//     return(t1/(t2*t3));
// }
// int main(){
//     int a=4;
//     int b=2;
//     cout<<C(a,b);
//     return 0;
// }

void draw(int row){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        int num=1;
        for(int l=1;l<=i;l++){
            cout<<num<<" ";
            num=num*(i-l)/l;
        }
        cout<<endl;
    }
}

int main(){
    int r;
    cout<<"Please enter the number of rows to print ";
    cin>>r;
    draw(r);
    return 0;
}