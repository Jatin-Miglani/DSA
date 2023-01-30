#include <iostream>
using namespace std;
struct Array{
    int A[4];
    int B[6];
    int sizeA;
    int sizeB;
    int lengthA;
    int lengthB;
};
void Display(struct Array *arr,int l,int a[]){
    cout<<"[";
    for(int i=0;i<l;i++){
        cout<<" "<<a[i]<<" ";
    }
    cout<<"]"<<endl;
}
void Merge(struct Array *arr){
    int c=arr->lengthA+arr->lengthB;
    int *C=new int[c];
    int i=0;
    int j=0;
    int k=0;
    while(i<arr->lengthA || j<arr->lengthB){
        if(arr->A[i]<arr->B[j]){
            C[k]=arr->A[i];
            i++;
        }
        else{
            C[k]=arr->B[j];
            j++;
        }
        k++;
    }
    for(i;i<arr->lengthA;i++){
        C[k]=arr->A[i];
        k++;
    }
    for(j;j<arr->lengthB;j++){
        C[k]=arr->B[j];
        k++;
    }
    // cout<<"[";
    // for(int i=0;i<c;i++){
    //     cout<<" "<<C[i]<<" ";
    // }
    // cout<<"]"<<endl;
    cout<<"C"<<endl;
    Display(arr,c,C);
    delete []C;
}
int main(){
    struct Array arr={{2,4,6,7},{1,3,5,8,9,10},4,6,4,6};
    cout<<"The given array is "<<endl;
    cout<<"A"<<endl;
    Display(&arr,arr.lengthA,arr.A);
    cout<<"The given array is "<<endl;
    cout<<"B"<<endl;
    Display(&arr,arr.lengthB,arr.B);
    Merge(&arr);
    return 0;
}