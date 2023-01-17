#include <iostream>
using namespace std;
struct Array{
    char A[100];
    int length;
};
void Length(struct Array *arr){
    int i=0;
    int l=0;
    while(arr->A[i]!='\0'){
        l++;
        i++;
    }
    arr->length=l;
}
void Display(struct Array *arr){
    cout<<arr->A<<endl;
}
// void Duplicates(struct Array *arr){
//     for(int i=0;arr->A[i]!='\0';i++){
//         int count =1;
//             for(int j=i+1;arr->A[j]!='\0';j++){
//                 if((arr->A[i]==arr->A[j])&&(arr->A[j]!='.')){
//                     count++;
//                     arr->A[j]='.';
//                 }
//             }
//             cout<<arr->A[i]<<" occurs "<<count <<" times."<<endl;
//         }
// }
// void Duplicates(struct Array *arr){
//     int *H=new int[26];
//     for(int i=0;i<26;i++){
//         H[i]=0;
//     }
//     for(int i=0;arr->A[i]!='\0';i++){
//         H[arr->A[i]-97]++;
//     }
//     for(int i=0;i<26;i++){
//         if(H[i]>1){
//             cout<<char(97+i)<<" occurs "<<H[i]<<" times."<<endl;
//         }
//     }
//     delete []H;
// }
void Duplicates(struct Array *arr){
    long int H=0;
    long int x=0;
    for(int i=0;arr->A[i]!=0;i++){
        H=1;
        H=H<<arr->A[i]-97;
    }
    for(int i=0;arr->A[i]!='\0';i++){
        x=1;
        x=x<<arr->A[i]-97;
        if(x&H >0){
            cout<<arr->A[i]<<"is a duplicate"<<endl;

        }
        else{
            H=x|H;
        }
    }
}
int main(){
    struct Array arr={"findinglist",2};
    Length(&arr);
    Display(&arr);
    Duplicates(&arr);
}