#include <iostream>
using namespace std;
class Array{
    int A[10]={6,3,8,10,16,7,2,9,14,11};
    int max;
    int min;
    public:
    Array(){
        cout<<"[";
        int l=sizeof(A)/sizeof(A[0]);
        for(int i=0;i<l;i++){
            cout<<" "<<A[i]<<" ";
        }
        cout<<"]"<<endl;
    }

    // void Checking(int k){
    //     int l=sizeof(A)/sizeof(A[0]);
    //     for(int i=0;i<l-1;i++){
    //         for(int j=i+1;j<l;j++){
    //             if(A[i]+A[j]==k){
    //                 cout<<A[i]<<" + "<<A[j]<<" = "<<k<<endl;
    //             }
    //         }
    //     }
    // }
    void MinMax(){
        int m1=A[0];
        int m2=A[0];
        int l=sizeof(A)/sizeof(A[0]);
        for(int i=0;i<l;i++){
            if(A[i]<m1){
                m1=A[i];
            }
            else if(A[i]>m2){
                m2=A[i];
            }
        }
        min=m1;
        max=m2;
        cout<<" Max "<<m2<<endl;
        cout<<" Min "<<m1<<endl;
    }

    void Checking(int k){
        int l=sizeof(A)/sizeof(A[0]);
        int *H=new int[max+1];
        for(int i=0;i<=max;i++){
            H[i]=0;
        }
        for(int i=0;i<l;i++){
            if(k-A[i]>=0){
                if(H[k-A[i]]!=0){
                cout<<A[i]<<" + "<<k-A[i]<<" = "<<k<<endl;
                }
            }
            H[A[i]]++;
        }
    }
};

int main(){
    Array A;
    int k;
    cout<<"Enter the sum whose pair you wanna find out ";
    cin>>k;
    A.MinMax();
    A.Checking(k);
    return 0;
}