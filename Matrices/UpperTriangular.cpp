#include <iostream>
using namespace std;
class Matrix{
    int *A;
    int n;
    int n2;
    public:
    Matrix(int n1){
        n2=n1;
        n=n1*(n1+1)/2;
        A=new int[n];
    }
    void Set(int i,int j,int x){
        if(i<=j){
            A[(n2*(j-1)-((j-2)*(j-1))/2)+(i-j)]=x;
        }
    }
    void Get(int i,int j){
        if(i<=j){
            cout<<A[(n2*(j-1)-((j-2)*(j-1))/2)+(i-j)]<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    void Display(){
        for(int i=1;i<=n2;i++){
            cout<<"[";
            for(int j=1;j<=n2;j++){
                if(i<=j){
                    cout<<" "<<A[(n2*(j-1)-((j-2)*(j-1))/2)+(i-j)]<<" ";
                }
                else{
                cout<<"0 ";
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
    int n1;
    n1=5;
    Matrix m(n1);
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n1;j++){
            int x;
            cout<<"Enter A["<<i<<"]["<<j<<"]"<<endl;
            cin>>x;
            m.Set(i,j,x);
        }
    }
    m.Get(3,4);
    m.Display();
    return 0;
}