#include <iostream>
using namespace std;
class Array{
    int A[11];
    int length;
    int l;
    int h;
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

    void Max(){
        int m=A[0];
        for(int i=1;i<length;i++){
            if(A[i]>m){
                m=A[i];
            }
        }
        cout<<"Max "<<m<<endl;
        h=m;
    }

    void Min(){
        int m;
        for(int i=1;i<length;i++){
            if(A[i]<m){
                m=A[i];
            }
        }
        cout<<"Min "<<m<<endl;
        l=m;
    }

    void Missing(){
        int *H=new int[h+1];
        for(int i=0;i<h;i++){
            H[i]=0;
        }

        for(int i=0;i<length;i++){
            H[A[i]]++;
        }

        cout<<"Missing Elements are "<<endl;
        for(int i=l;i<h;i++){
            if(H[i]==0){
                cout<<i<<endl;
            }
        }
    }
};
int main(){
    int l;
    cout<<"Enter the number of elements ";
    cin>>l;
    Array A(l);
    A.Display();
    A.Max();
    A.Min();
    A.Missing();
    return 0;
}