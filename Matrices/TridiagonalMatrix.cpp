#include <iostream>
using namespace std;
class Matrix{
    int *A;
    int l;
    public:
    Matrix(int n1){
        l=n1;
        cout<<(3*l)-2<<endl;
        A=new int[(3*l)-2];
    }
    void Set(int i,int j,int x){
        if(i-j==1){
            A[i-2]=x;
        }
        if(i-j==0){
            A[l+i-2]=x;
        }
        if(i-j==-1){
            A[2l+i-2]=x;
        }
    }
    void Display(){
        for(int i=1;i<=l;i++){
            cout<<"[";
            for(int j=1;j<=l;j++){
                if(i-j==1){
                    cout<<" "<<A[i-2]<<" ";
                }
                if(i-j==0){
                    cout<<" "<<A[l+i-2]<<" ";
                }
                if(i-j==-1){
                    cout<<" "<<A[2l+i-2]<<" ";
                }
                if(!(i-j==1)&&!(i-j==0)&&!(i-j==-1)){
                    cout<<" 0 ";
                }
            }
            cout<<"]"<<endl;
        }
    }
    ~Matrix(){
        delete []A;
    }
};
int main(){
    int l1=5;
    Matrix m(l1);
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l1;j++){
            if(i-j==1 || i-j==0 || i-j==-1){
                int x=0;
                cout<<"Enter A["<<i<<"]["<<j<<"]"<<endl;
                cin>>x;
                m.Set(i,j,x);
            }
        }
    }
    m.Display();
}