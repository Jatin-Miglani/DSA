#include <iostream>
using namespace std;
struct Array{
    int *A;
    int size;
    int length;
};
void Display(Array arr){
    cout<<"elements are "<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
    cout<<endl;
}
int main(){
    Array arr;
    cout<<"Enter the size of array ";
    cin>>arr.size;
    arr.A=new int[arr.size*sizeof(int)];
    int n;
    cout<<"Enter the number of elements to enter ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    Display(arr);
    cout<<sizeof(arr.A)/sizeof(arr.A[1]);
    return 0;
}

// class Array{
//     public:
//     int *A;
//     int size;
//     int length;

//     void Display(){
//         for(int i=0;i<length;i++){
//             cout<<A[i]<<" ";
//         }
//         cout<<endl;
//     }

    
// };
// int main(){
//     Array arr;
//     cout<<"Enter the size of the array ";
//     cin>>arr.size;
//     arr.A=new int [arr.size*sizeof(int)];
//     int n;
//     cout<<"Enter the number of elements ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr.A[i];
//     }
//     cout<<endl;
//     arr.length=n;
//     cout<<arr.size*sizeof(int)<<endl;;
//     arr.Display();
//     delete [] arr.A;
//     return 0;

// }

// class Array{
//     private:
//     int *A;
//     int size;
//     int length;

//     public:
//     Array(){
//         int a;
//         cout<<"Enter the size of Array ";
//         cin>>a;
//         size=a;
//     }

//     void create(){
//         A=new int[size*sizeof(int)];
//         int n;
//         cout<<"Enter the number of elements ";
//         cin>>n;
//         length=n;
//     }

//     void enter(){
//         for(int i=0;i<length;i++){
//             cin>>A[i];
//         }
//     }

//     void Display(){
//         for(int i=0;i<length;i++){
//             cout<<A[i];
//         }
//     }
// };
// int main(){

//     Array A;
//     A.create();
//     A.enter();
//     A.Display();

//     return 0;

// }

