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
void Setting(struct Array *arr,int i,int j){
    while(arr->A[i]<0){
        i++;
    }
    while(arr->A[j]>0){
        j--;
    }
    if(i<j){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
        return Setting(arr,0,arr->length-1);
    }

}
int main(){
    struct Array arr={{-6,3,-8,-10,5,-7,-9,12,-4,2},10,10};
    cout<<"The Given Array is "<<endl;
    Display(&arr);
    cout<<"The sorted array is "<<endl;
    Setting(&arr,0,arr.length);
    Display(&arr);
    return 0;
}