#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
    int max;
    int min;
};
void Display(struct Array arr){
    cout<<"[";
    for(int i=0;i<arr.length;i++){
        cout<<" "<<arr.A[i]<<" ";
    }
    cout<<"]"<<endl;
}
// void Duplicate(struct Array *arr){
//     int d=0;
//     for(int i=0;i<arr->length;i++){
//         if(arr->A[i]==arr->A[i+1] && arr->A[i]!=d){
//             cout<<arr->A[i]<<endl;
//             d=arr->A[i];
//         }
//     }
// }
int MaxMin(struct Array *arr){
    int max=arr->A[0];
    int min=arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(arr->A[i]>max){
            max=arr->A[i];
        }
        else if(arr->A[i]<min){
            min=arr->A[i];
        }
    }
    arr->max=max;
    arr->min=min;
}
void Duplicate(struct Array *arr){
    MaxMin(arr);
    int *H=new int[arr->max+1];
    for(int i=0;i<arr->max;i++){
        H[i]=0;
    }
    for(int i=0;i<arr->length;i++){
        H[arr->A[i]]++;
    }
    for(int i=0;i<arr->max;i++){
        if(H[i]>1){
            cout<<i<<" occurs "<<H[i]<<" times."<<endl;
        }
    }
}
int main(){
    struct Array arr={{3,6,8,8,10,12,15,15,15,20},10,10};
    cout<<"The given array is "<<endl;
    Display(arr);
    cout<<"Duplicates are "<<endl;
    Duplicate(&arr);
    return 0;
}