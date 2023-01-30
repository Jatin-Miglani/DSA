#include <iostream>
using namespace std;
class Array{
    private:
    int A[11];
    int size;
    int length;

    public:
    Array(int l){
        length=l;
        for(int i=0;i<l;i++){
            cin>>A[i];
        }
    }

    void Display(){
        cout<<"[";
        for(int i=0;i<length;i++){
            cout<<" "<<A[i]<<" ";
        }
        cout<<"]"<<endl;
    }

    // double Missing(){
    //     double s=0;
    //     double n=A[length-1];
    //     double sum=n*((n+1)/2);
    //     for(int i=0;i<length;i++){
    //         s=s+A[i];
    //     }
    //     cout<<sum<<endl;
    //     cout<<s<<endl;
    //     double m=sum-s;

    //     return m;
    // }

    // int Missing(){
    //     int l=A[0];
    //     for(int i=0;i<length;i++){
    //         int diff=0;
    //         diff=A[i]-i;
    //         if(diff!=l){
    //             cout<<i+l<<endl;
    //             l=diff;
    //         }
            
    //     }
    // }
    int Missing(){
        int l=A[0];
        for(int i=0;i<length;i++){
            if(A[i]-i!=l){
                while(l<A[i]-i){
                    cout<<i+l<<endl;
                    l++;
                }
            }
        }
    }
};
int main(){
    cout<<"Enter the no of elements in the array ";
    int l;
    cin>>l;
    Array A(l);
    A.Display();
    A.Missing();

    return 0;
}