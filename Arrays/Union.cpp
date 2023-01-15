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
//Unsorted Array
void Union(struct Array *arr){
    int c=arr->lengthA+arr->lengthB;
    int *C=new int[c];
    for(int i=0;i<arr->lengthA;i++){
        C[i]=arr->A[i];
    }
    int k=arr->lengthA;
    int d;
    for(int i=0;i<arr->lengthB;i++){
        int count=0;
        for(int j=0;j<arr->lengthA;j++){
            if(arr->B[i]!=arr->A[j]){
                count=count+1;
            }
        }
        if(count==arr->lengthA){
            C[k]=arr->B[i];
            k++;
        }
        else{
            d=d=2;
        }
    }
    Display(arr,c-d,C);
}
//Sorted Arrays
// void Union(struct Array *arr){
//     int i=0;
//     int j=0;
//     int k=0;
//     int c=arr->lengthA+arr->lengthB;
//     int *C=new int[c];
//     int count=0;
//     while(i<arr->lengthA && j<arr->lengthB){
//         if(arr->A[i]<arr->B[j]){
//             C[k]=arr->A[i];
//             i++;
//             k++;
//         }
//         if(arr->B[j]<arr->A[i]){
//             C[k]=arr->B[j];
//             j++;
//             k++;
//         }
//         if(arr->A[i]==arr->B[j]){
//             i++;
//             j++;
//             count+=2;
//         }
//     }
//     for(i;i<arr->lengthA;i++){
//         C[k]=arr->A[i];
//         k++;
//     }
//     for(j;j<arr->lengthB;j++){
//         C[k]=arr->B[j];
//         k++;
//     }
//     Display(arr,c-count,C);
// }
int main(){
    struct Array arr={{3,5,10,4,6},{12,4,7,2,5},10,10,5,5};
    //struct Array arr={{3,4,5,6,10},{2,4,5,7,12},10,10,5,5};
    cout<<"The given Array is "<<endl;
    cout<<"A"<<endl;
    Display(&arr,arr.lengthA,arr.A);
    cout<<"B"<<endl;
    Display(&arr,arr.lengthB,arr.B);
    cout<<"C"<<endl;
    Union(&arr);
    return 0;
}