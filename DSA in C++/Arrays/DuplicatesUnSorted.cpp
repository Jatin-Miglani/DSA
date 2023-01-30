#include <iostream>
using namespace std;
class Array{
    int A[10]={8,3,6,4,6,5,6,8,2,7};
    int max;
    int min;
    public:
    Array(){
        cout<<"[";
        for(int i=0;i<(sizeof(A))/sizeof(A[0]);i++){
            cout<<" "<<A[i]<<" ";
        }
        cout<<"]"<<endl;
    }

    // void Duplicates(){
    //     int l=sizeof(A)/sizeof(A[0]);
    //     cout<<l<<endl;
    //     for(int i=0;i<l-1;i++){
    //         int count=1;
    //         for(int j=i+1;j<l;j++){
    //             if(A[i]==A[j] && A[i]!=-1){
    //                 count++;
    //                 A[j]=-1;
    //             }
    //         }
    //         if(count>1){
    //             cout<<A[i]<<" occurs "<<count<<" times."<<endl;
    //         }
    //     }
    // }

    void MaxMin(){
        int m1=A[0];
        int m2=A[0];
        int l=sizeof(A)/sizeof(A[0]);
        for(int i=0;i<l;i++){
            if(A[i]>m1){
                m1=A[i];
            }
            else if(A[i]<m2){
                m2=A[i];
            }
        }
        max=m1;
        min=m2;
        cout<<"Max "<<max<<endl;
        cout<<"Min "<<min<<endl;
    }

    void Duplicates(){
        int *H=new int[max+1];
        int l=sizeof(A)/sizeof(A[0]);
        for(int i=0;i<=max;i++){
            H[i]=0;
        }
        for(int i=0;i<l;i++){
            H[A[i]]++;
        }
        for(int i=min;i<=max;i++){
            if(H[i]>1){
                cout<<i<<" occurs "<<H[i]<<" times."<<endl;
            }
        }
        delete []H;
    }

};
int main(){
    Array A;
    A.MaxMin();
    A.Duplicates();
    return 0;
}