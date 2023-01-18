#include <iostream>
using namespace std;
class Matrix{
    int n;
    int *A;
    public:
    Matrix(int n1){
        n=n1;
        A=new int[n];
    }
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display();

    ~Matrix(){
        delete []A;
    }
};
void Matrix::Set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
        cout<<"Aa gyi value "<<endl;
    }
    
}
int Matrix::Get(int i,int j){
    if(i==j){
        cout<<"A["<<i<<"]["<<j<<"] is "<<A[i-1]<<endl;
    }
    else{
        return 0;
    }
}
void Matrix::Display(){
    for(int i=1;i<=5;i++){
        cout<<"|";
        for(int j=1;j<=5;j++){
            if(i==j){
                cout<<" "<<A[i-1];
            }
            else{
                cout<<" 0 ";
            }
        }
        cout<<"|"<<endl;
    }
}
int main(){
    Matrix m(5);
    m.Set(1,1,9);
    m.Set(2,2,2);
    m.Set(3,3,5);
    m.Set(4,4,10);
    m.Set(5,5,7);
    m.Get(4,4);
    m.Display();
    return 0;
}