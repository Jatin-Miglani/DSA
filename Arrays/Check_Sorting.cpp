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
    cout<<"]";
}
int Check_Sorting(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]>arr->A[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    struct Array arr={{4,8,13,26,20,25,28,35},10,8};
    cout<<"The Given Array is "<<endl;
    Display(&arr);
    cout<<"Is the array Sorted? ";
    cout<<Check_Sorting(&arr)<<endl;
    return 0;
}