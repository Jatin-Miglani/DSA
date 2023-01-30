#include <iostream>
using namespace std;
int main(){
    int n{};
    cout<<"Enter the size of array :";
    cin>>n;
    int A[n];
    int i{0};
    int j{0};
    

    for(i=0;i<=n-1;i++){
        cout<<"Enter the "<<i<<" index number :";
        cin>>A[i];
    }
    for(i=0; i<=n-1; i++){
        
        for( j=i+1; j<=n-1; j++ ){
            
            if(A[i]>A[j]){
                swap(A[i],A[j]);
                cout<<"swapping\n";
            }
            else{
                continue;
            }
        

        }
    }
    for(i=0;i<=n-1;i++){
            cout<<"The "<<i<<" index number :"<<A[i]<<endl;
            
             }
    

    return 0;
    

}