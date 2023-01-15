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
void Left_Shift(struct Array *arr){
    int a=arr->A[0];
    for(int i=0;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
}
void Right_Shift(struct Array *arr){
    int a=arr->A[arr->length];
    for(int i=arr->length-1;i>=0;i--){
        arr->A[i+1]=arr->A[i];
    }
    arr->A[0]=0;
}
void Right_Rotate(struct Array *arr){
    int a=arr->A[arr->length-1];
    for(int i=arr->length-1;i>=0;i--){
        arr->A[i+1]=arr->A[i];
    }
    arr->A[0]=a;
}
void Left_Rotate(struct Array *arr){
    int a=arr->A[0];
    for(int i=0;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=a;
}
int main(){
    struct Array arr={{1,2,3,4,5,6},10,6};
    cout<<"The given Array is "<<endl;
    Display(&arr);
    cout<<"Left Shifting is "<<endl;
    Left_Shift(&arr);
    Display(&arr);
    cout<<"Right Shifting is "<<endl;
    Right_Shift(&arr);
    Display(&arr);
    cout<<"Right Rotation is "<<endl;
    Right_Rotate(&arr);
    Display(&arr);
    cout<<"Left Rotation is "<<endl;
    Left_Rotate(&arr);
    Display(&arr);
    return 0;
}
