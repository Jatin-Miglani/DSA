#include <iostream>
#include <conio.h>
using namespace std;
class average{
    int n;
    int A[];
    public:
    average(){
        int i{0};
        cout<<"Enter how many numbers :";
        cin>>n;
        
        while(i<n){
            cout<<"Enter the "<<i+1<<" Integer"<<endl;
            cin>>A[i];
            i++;

        }

    }
    void check(){
        double sum {0};
        for(int j=0 ; j<n ; j++ ){
            sum= sum+ static_cast <double> (A[j]);

        }
        sum=(sum)/(n);
        cout<<"Average is "<<sum<<endl;
        
    }

};
int main(){
    average obj;
    obj.check();
    getch();
    return 0;
}