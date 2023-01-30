#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
int Display(struct Array arr){
    cout<<"[";
    for(int i=0;i<arr.length;i++){
        cout<<" "<<arr.A[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}
void Set(struct Array *arr,int *s1){
    int i;
    cout<<"Enter the Index you want to set your value at ";
    cin>>i;
    if(i>=0&&i<arr->length){
        arr->A[i]=*s1;
    }
    else{
        cout<<"Index not Found "<<endl;
    }
}
void Get(struct Array *arr){
    cout<<"Enter the index whose value you want to get ";
    int i;
    cin>>i;
    if(i>=0&&arr->length){
        cout<<arr->A[i]<<endl;
    }
    else{
        cout<<"Invalid Index"<<endl;
    }
    
}
int Max(struct Array *arr){
    int max=arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(arr->A[i]>max){
            max=arr->A[i];
        }
    }
    return max;
}
int Min(struct Array *arr){
    int min=arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(arr->A[i]<min){
            min=arr->A[i];
        }
    }
    return min;
}
int Sum(struct Array *arr){
    int sum=0;
    for(int i=0;i<arr->length;i++){
        sum=sum+arr->A[i];
    }
    return sum;
}
int Avg(struct Array *arr){
    int sum=0;
    for(int i=0;i<arr->length;i++){
        sum=sum+arr->A[i];
    }
    return (sum/arr->length);
}
int main(){
    struct Array arr={{43,78,24,13,8,95,84},10,7};
    cout<<"The given array is "<<endl;
    Display(arr);
    cout<<"What is value you want to set in the array ";
    int s;
    cin>>s;
    Set(&arr,&s);
    Display(arr);
    Get(&arr);
    Display(arr);
    cout<<Max(&arr)<<endl;
    Display(arr);
    cout<<Min(&arr)<<endl;
    Display(arr);
    cout<<Sum(&arr)<<endl;
    Display(arr);
    cout<<Avg(&arr)<<endl;
    Display(arr);
    return 0;
}
