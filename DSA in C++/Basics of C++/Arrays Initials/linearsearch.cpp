#include <iostream>
#include <conio.h>
using namespace std;
class binary{
    private:
    int n;
    int beg;
    int end;
    int ele;

    public:
    void func(){
        int size;
        cout<<"Enter the size of array ";
        cin>>size;
        n=size;
    }

    int B[];

    void func1();

    void check(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(B[j]>B[j+1]){
                    int temp=B[j];
                    B[j]=B[j+1];
                    B[j+1]=temp;
                }
            }
        }
    }
    void print(){
        cout<<"Sorted list is"<<endl;
        for(int i=0; i<n;i++){
           
            cout<<B[i]<<" ";
        }
        beg=B[0];
        end=B[n-1];
    }

    void enter(){
        int search;
        cout<<"Enter the element you want to search ";
        cin>>search;
        ele=search;
    }
    
    void search();

};
void binary::func1(){
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i+1<<" number ";
        cin>>B[i];
    }
}
void binary::search(){
    // int mid;
    // mid=(int)(beg+end)/2;
    // while(beg<end && B[mid]!=ele){
    //     if(ele<B[mid]){
    //         end=B[mid-1];
    //     }
    //     if(ele>B[mid]){
    //         beg=B[mid+1];
    //     }
    //     mid=(int)(beg+end)/2;
    // }
    // if(B[mid]==ele){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"not present";
    // }
    //linear Search.
    int count=0;
    for(int i=0; i<n;i++){
        if(ele==B[i]){
            count++;
        }
    }
    if(count==1){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}

int main(){
    binary obj;
    obj.func();
    obj.func1();
    obj.check();
    obj.print();
    obj.enter();
    obj.search();
    getch();
    return 0;
}