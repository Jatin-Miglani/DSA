#include <iostream>
using namespace std;
// class Array{
//     int A[10]={1,2,3,4,5,6,7,8,9};
//     int key;
//     public:
//     Array(){
//         cout<<"Enter the element you want to find out ";
//         int a;
//         cin>>a;
//         key =a;
//     }
//     void swap(int &a,int &b){
//         int temp;
//         temp=a;
//         a=b;
//         b=temp;
//     }
//     int Linear_Search(){
//         for(int i=0;i<(sizeof(A))/sizeof(A[0]);i++){
//             if(A[i]==key){
//                 swap(A[i],A[i-1/*0*/]);
//                 cout<<"Element found Successfully at index "<<endl;
//                 return i;
//             }
//         }
//         return -1;
        

//     }
//     void Display(){
//         for(int i=0;i<(sizeof(A))/sizeof(A[0]);i++){
//             cout<<A[i]<<endl;
//         }
//     }
// };
// int main(){
//     Array A;
//     cout<<A.Linear_Search()<<endl;
//     A.Display();
//     return 0;
// }

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
    cout<<"]"<<endl;;
}
void swap(int *x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int Linear_Search(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key == arr->A[i]){
            if(i==0){
                return i;
            }
            swap(&(arr->A[i]),&(arr->A[0]));
            return i;
        }
    }
    return -1;

}
int main(){
    struct Array arr={{1,2,3,4,5,6,7,8},10,8};
    cout<<"Elements before linear transposition are "<<endl;
    Display(arr);
    cout<<"Elements After linear transposition are "<<endl;
    
    cout<<Linear_Search(&arr,9)<<endl;
    Display(arr);
    return 0;
}