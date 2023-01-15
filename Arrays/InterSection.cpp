#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int B[10];
    int sizeA;
    int sizeB;
    int lengthA;
    int lengthB;
};
void Display(struct Array *arr,int l,int A[]){
    cout<<"[";
    for(int i=0;i<l;i++){
        cout<<" "<<A[i]<<" ";
    }
    cout<<"]"<<endl;
}
//UnSorted Array
// void InterSection(struct Array *arr){
//     int c=arr->lengthA+arr->lengthB;
//     int *C=new int[c];
//     int k=0;
//     int count=0;
//     for(int i=0;i<arr->lengthA;i++){
//         for(int j=0;j<arr->lengthB;j++){
//             if(arr->A[i]==arr->B[j]){
//                 C[k]=arr->A[i];
//                 k++;
//                 count++;
//             }
//         }
//     }
//     Display(arr,count,C);
// }
void InterSection(struct Array *arr){
    int i=0;
    int j=0;
    int k=0;
    int c=arr->lengthA + arr->lengthB;
    int *C=new int[c];
    int count=0;
    while(i<arr->lengthA && j<arr->lengthB){
        if(arr->A[i]<arr->B[j]){
            i++;
        }
        if(arr->A[i]>arr->B[j]){
            j++;
        }
        if(arr->A[i]==arr->B[j]){
            C[k]=arr->A[i];
            i++;
            j++;
            k++;
            count++;
        }
    }
    Display(arr,count,C);   
}
int main(){
    //struct Array arr={{3,5,10,4,6},{10,4,7,2,5},10,10,5,5};
    struct Array arr={{3,4,5,6,10},{2,4,5,7,10},10,10,5,5};
    cout<<"The given array is "<<endl;
    cout<<"A"<<endl;
    Display(&arr,arr.lengthA,arr.A);
    cout<<"B"<<endl;
    Display(&arr,arr.lengthB,arr.B);
    cout<<"InterSected Array C"<<endl;
    InterSection(&arr);
    return 0;
}