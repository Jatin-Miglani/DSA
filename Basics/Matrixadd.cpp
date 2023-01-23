#include<iostream>
using namespace std;
class Matrix{
    private:
    int a[5][5];
    int b[5][5];
    int c[5][5];
    int R,C,i,j;
    public:

    void rowsandcolumns(){
        cout<<"Enter the size of Matrix:"<<endl;
        cin>>R>>C;
    }
    void firstmatrix(){
        cout<<"Enter the element of first matrix:"<<endl;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cin>>a[i][j];                
            }
        }        
    }
    void secondmatrix(){
        cout<<"Enter the element of second matrix:"<<endl;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cin>>b[i][j];                
            }
        }
    }
    void sum(){
        cout<<"Sum of two matrices are:"<<endl;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                c[i][j]=a[i][j]+b[i][j];
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Matrix m;
    m.rowsandcolumns();
    m.firstmatrix();
    m.secondmatrix();
    m.sum();
    return 0;
}