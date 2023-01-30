#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element ";
        cin>>A[i];
    }
    int *p;
    p=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" pointer array element ";
        cin>>p[i];
    }
    cout<<"Array A"<<endl;
    cout<<"[";
    for(int j=0;j<n;j++){
        cout<<" "<<A[j]<<" ";
    }
    cout<<"]"<<endl;
    cout<<"Pointer Array"<<endl;
    cout<<"[";
    for(int j=0;j<n;j++){
        cout<<" "<<p[j]<<" ";
    }
    cout<<"]"<<endl;

    int *q=new int[10];
    for(int i=0;i<n;i++){
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    delete []p;
    cout<<endl<<"[";
    for(int i=0;i<n;i++){
        cout<<" "<<p[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}