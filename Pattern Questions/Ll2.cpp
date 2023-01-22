#include <iostream>
using namespace std;
// int main(){
//     for(int i=0; i<5;i++){
//         cout<<"* * * *"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int r;
//     int c;
//     cout<<"Enter row and column ";
//     cin>>r>>c;
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int r;
//     int c;
//     cout<<"Enter row and column ";
//     cin>>r>>c;
//     for(int i=0;i<c;i++){
//         if(i==0||i==c-1){
//             for(int j=0;j<r;j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=0;j<r;j++){
//                 if(j==0||j==r-1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
int main(){
    int r;
    cout<<"Enter the row ";
    cin>>r;
    for(int i=r;i<=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}