#include <iostream>
using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the row ";
//     cin>>r;
//     for(int i=r;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
int main(){
    int r;
    cout<<"Enter the row ";
    cin>>r;
    // for(int i=r;i>=1;i--){
    //     for(int j=0;j<=i;j++){
    //         cout<<" ";
    //     }
    //     // for(int j=1;j<=r;j++){
    //     //     cout<<"*";
    //     // }
        
    //     cout<<endl;
    // }


    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout<<" ";
    //     for(int l=1;l<=r-i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout<<" ";
    //     for(int l=1;l<=i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    //Floyd's Triangle
    // int sum=0;
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=i;j++){
            
    //             sum=sum+1;
    //             cout<<" "<<sum<<" ";
        
    //     }
    //     cout<<endl;
    // }


    // //Butterfly pattern
    // for(int i=1;i<=r;i++){
    //    for(int j=1;j<=i;j++){
    //     cout<<"*";
    //    }
    //    int space= 2*r-2*i;
    //     for(int j=1;j<=space;j++){
    //     cout<<" ";
    //     }
    //    for(int l=1;l<=i;l++){
    //     cout<<"*";
    //    }
    //    cout<<endl;
    // }
    // for(int i=1;i<=r;i++){
    //    for(int j=1;j<=i;j++){
    //     cout<<"*";
    //    }
    //    int space= 2*r-2*i;
    //     for(int j=1;j<=space;j++){
    //     cout<<" ";
    //     }
    //    for(int l=1;l<=i;l++){
    //     cout<<"*";
    //    }
    //    cout<<endl;
    // }
    // for(int i=1;i<=r;i++){
    //    for(int j=1;j<=i;j++){
    //     cout<<"*";
    //    }
    //    int space= 2*r-2*i;
    //     for(int j=1;j<=space;j++){
    //     cout<<" ";
    //     }
    //    for(int l=1;l<=i;l++){
    //     cout<<"*";
    //    }
    //    cout<<endl;
    // }

    // for(int i=0;i<r;i++){
    //     for(int j=r-i;j>0;j--){
    //         cout<<"*";
    //     }
    //     for(int j=1;j<=2*i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=r-i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // for(int i=0;i<r;i++){
    //     for(int j=r-i;j>0;j--){
    //         cout<<"*";
    //     }
    //     for(int j=1;j<=2*i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=r-i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // for(int i=0;i<r;i++){
    //     for(int j=r-i;j>0;j--){
    //         cout<<"*";
    //     }
    //     for(int j=1;j<=2*i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=r-i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=r-i;j++){
    //         cout<<"*";
    //     }
    //     // for(int j=1;j<=i;j++){
    //     //     cout<<"*";
    //     // }
    //     for(int j=1;j<=r-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<50;i++){
    //      for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=r-i;j++){
    //         cout<<"*";
    //     }
    //     // for(int j=1;j<=i;j++){
    //     //     cout<<"*";
    //     // }
    //     for(int j=1;j<=r-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // }

    // for(int i=0;i<r;i++){
    //     for(int j=0;j<r-i;j++){
    //         cout<<" "<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }


    //pyramid for alternative 0 and 1
    // for(int i=1;i<=r;i++){
    //     if(i%2==0){
    //         for(int j=1;j<=i;j++){
    //             if(j%2==0){
    //                 cout<<"1";
    //             }
    //             else{
    //                 cout<<"0";
    //             }
    //         }
    //     cout<<endl;       

    //     }
    //     else{
    //         for(int j=1;j<=i;j++){
    //             if(j%2==0){
    //                 cout<<"0";
    //             }
    //             else{
    //                 cout<<"1";
    //             }
                
    //         }
    //         cout<<endl;
    //     }
    // }

    //Rhombus Pattern
    // for(int i=1;i<=r;i++){
    //     for(int j=0;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=r;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int c=r-1;
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<=((c+r)/2)-i+1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    
    

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<j <<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=r-1;i++){
    //     cout<<" ";
    // }
    // cout<<1<<" "<<endl;
    // for(int i=2;i<=r;i++){
    //     for(int j=0;j<=r-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=i;j<1;j--){
    //         cout<<j<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<j <<" ";
    //     }
    //     cout<<endl;
    // }

    // Palindromic Pyramid
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=i;j>=1;j--){
    //         cout<<j<<" ";
    //     }
    //     for(int j=2;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=r-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=i;j>=1;j--){
    //         cout<<"*"<<" ";
    //     }
    //     for(int j=2;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=i;j<=r;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=i;j<r;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // zig zag pattern
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=r;j++){
    //         if(((i+j)%4==0)||(i==2&&j%4==0)){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Pascal Triangle

    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<r-i-1;j++){
    //         cout<<" ";
    //     }
    //     int num=1;
    //     for(int k=1;k<=i;k++){
    //         cout<<num<<" ";
    //         num=num*(i-k)/k;
    //     }
    //     cout<<endl;

    // }

    for(int i=1;i<=r;i++){
        for(int j=1;j<r-i-1;j++){
            cout<<" ";
        }
        int num=1;
        for(int k=1;k<=i;k++){
            cout<<num<<" ";
            num=num*(i-k)/k;
        }
        cout<<endl;
    }
    
}


