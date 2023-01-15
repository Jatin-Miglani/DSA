#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array *arr){
    cout<<"[";
    for(int i=0;i<arr->length;i++){
        cout<<" "<<arr->A[i]<<" ";
    }
    cout<<"]"<<endl;
}
// void Reverse(struct Array *arr){
//     int *B= new int[arr->length];
//     for(int i=arr->length-1,j=0;i>=0;i--,j++){
//         B[j]=arr->A[i];
//     }
//     for(int i=0;i<arr->length;i++){
//         arr->A[i]=B[i];
//     }
// }
void Reverse(struct Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}
int main(){
    struct Array arr={{1,2,3,4,5,6,7,8,9,10},10,10};
    cout<<"The given array is "<<endl;
    Display(&arr);
    cout<<"The Reversed Array is "<<endl;
    Reverse(&arr);
    Display(&arr);

}