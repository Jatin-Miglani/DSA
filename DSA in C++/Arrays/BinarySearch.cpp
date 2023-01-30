#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
    int l;
    int h;
};
// int Binary_Search(struct Array arr,int a){
//     while(arr.l<=arr.h){
//         int mid=(arr.l+arr.h)/2;
//         if(a==arr.A[mid]){
//             return mid;
//         }
//         else if(a<arr.A[mid]){
//             arr.h=mid-1;
//         }
//         else{
//             arr.l=mid+1;
//         }
//     }
//     return -1;
// }
int Binary_Search(int A[],int a,int l1,int h1){
    int mid=0;
    if(l1<=h1){
        mid=(l1+h1)/2;
        if(a==A[mid]){
            return mid;
        }
        else if(a<A[mid]){
            return Binary_Search(A,a,l1,mid-1);
        }
        else{
            return Binary_Search(A,a,mid+1,h1);
        }
    }
    if(l1>h1){
        return -1;
    }
}
int main(){
    struct Array arr{{1,2,3,4,5,6},10,6,0,6};
    int key;
    cout<<"Enter the element you want to search ";
    cin>>key;
    cout<<"Element found at Index ";
    cout<<Binary_Search(arr.A,key,0,6);
    return 0;
}