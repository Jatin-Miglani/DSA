// #include <iostream>
// using namespace std;
// struct Array{
//     char A[10];
//     int length;
// };
// void Display(struct Array *arr){
//     cout<<arr->A<<endl;

// }
// void length(struct Array *arr){
//     int l=0;
//     int i=0;
//     while(arr->A[i]!='\0'){
//         l++;
//         i++;
//     }
//     cout<<l<<endl;
//     arr->length=l;
// }
// // void Palindrome(struct Array *arr){
// //     char *B=new char[arr->length];
// //     for(int i=0;arr->A[i]!=0;i++){
// //         B[i]=arr->A[arr->length-i-1];
// //     }
// //     for(int i=0;arr->A[i]!=0;i++){
// //         if(arr->A[i]!=B[i]){
// //             cout<<"not a palindrome"<<endl;
// //             delete []B;
// //             return;
// //         }
// //     }
// //     cout<<"It's a Palindrome "<<endl;
// //     delete []B;
// // }
// void Palindrome(struct Array *arr){
//     int i=0;
//     int j=arr->length-1;
//     for(i,j;i<=j;i++,j--){
//         if(arr->A[i]!=arr->A[j]){
//             cout<<"not a Palindrome "<<endl;
//             return;
//         }
//     }
//     cout<<"Plaindrome :)"<<endl;
// }
// int main(){
//     struct Array arr ={"MadaM"};
//     length(&arr);
//     Display(&arr);
//     Palindrome(&arr);
// }
#include <iostream>
using namespace std;
struct Array{
    char A[10];
    int length;
};
void Length(struct Array *arr){
    int i,l=0;
    while(arr->A[i]!=0){
        l++;
        i++;
    }
    arr->length=l;
}
void Display(struct Array *arr){
    cout<<arr->A<<endl;
}
void Duplicates(struct Array *arr){
    for(int i=0;arr->A[i]!='\0';i++){
        int count =1;
        for(int j=i+1;arr->A[j]!='\0';j++){
            if(arr->A[i]==arr->A[j]){
                count++;
            }
        }
        cout<<arr->A[i]<<" occurs "<<count <<" times."<<endl;
    }
}
int main(){
    struct Array arr={"finding"};
    Length(&arr);
    Display(&arr);
    Duplicates(&arr);
    return 0;
}