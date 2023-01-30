#include <iostream>
using namespace std;
struct Array{
    char A[100];
    char B[100];
    int lengthA;
    int lengthB;
};
void Length(struct Array *arr,char A[],int &l){
    l=0;
    int i=0;
    while(A[i]!='\0'){
        l++;
        i++;
    }
    cout<<l<<endl;
}
void Anagram(struct Array *arr){
    int *H=new int[26];
    for(int i=0;i<26;i++){
        H[i]=0;
    }
    for(int i=0;arr->A[i]!='\0';i++){
        H[arr->A[i]-97]++;
    }
    for(int i=0;arr->B[i]!='\0';i++){
        H[arr->B[i]-97]--;
    }
    for(int i=0;i<26;i++){
        if(H[i]<0){
            cout<<"Not an Anagram"<<endl;
            return;
        }
        if(H[i]>0){
            cout<<char(i+97)<<" occurs "<<H[i]+1<<" times."<<endl;
        }
    }
    cout<<"Yeh Anagram hai"<<endl;
}
int main(){
    struct Array arr={"verbose","observe",2,3};
    Length(&arr,arr.A,arr.lengthA);
    Length(&arr,arr.B,arr.lengthB);
    Anagram(&arr);
}