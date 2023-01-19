#include <iostream>
using namespace std;
struct Array{
    int *A;
    int l;
};
void Constructor(struct Array *arr){
    int n=arr->l;
    arr->A=new int[n];
}
void Set(struct Array *arr,int i,int j,int x){
    arr->A[i-1]=x;
}
void Display(struct Array *arr){
    for(int i=1;i<=arr->l;i++){
        cout<<"[";
        for(int j=1;j<=arr->l;j++){
            if(i==j){
                cout<<" "<<arr->A[i-1]<<" ";
            }
            if(i>j){
                int temp=j;
                cout<<" "<<arr->A[temp-1]<<" ";
            }
            if(i<j){
                cout<<" "<<arr->A[i-1]<<" ";
            }
        }
        cout<<"]"<<endl;
    }
}
void Destructor(struct Array *arr){
    delete []arr->A;
}
int main(){
    struct Array arr;
    int l1;
    cout<<"Enter the size of matrix ";
    cin>>l1;
    arr.l=l1;
    Constructor(&arr);
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l1;j++){
            if(i==j){
                int x=0;
                cout<<"Enter x"<<endl;
                cin>>x;
                Set(&arr,i,j,x);
            }
        }
    }
    Display(&arr);
    Destructor(&arr);
    return 0;
}