#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
    cout<<"[";
    for(int i=0;i<arr.length;i++){
        cout<<" "<<arr.A[i]<<" ";
    }
    cout<<"]"<<endl;
}
void Insert(struct Array *arr,int a1){
    int i=arr->length-1;
    arr->length++;
    while(a1<arr->A[i]){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=a1;
}
int main(){
    struct Array arr={{4,8,13,16,20,25,28,35},10,8};
    cout<<"The Given Array is "<<endl;
    Display(arr);
    int a;
    cout<<"Enter the Element to insert ";
    cin>>a;
    Insert(&arr,a);
    Display(arr);

}