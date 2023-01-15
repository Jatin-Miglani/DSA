#include <iostream>
using namespace std;

int x=0;
int fun1(int n){
    // if(n>0){
        ////execution at calling time.
    //     cout<<n<<endl;
    //     fun1(n-1);
    // }
    // if(n>0){
    //     fun1(n-1);
        ////execution at return time.
    //     cout<<n<<endl;
    // }
    
    // if(n>0){
    //     return fun1(n-1)+n;

    // }

    // if(n>0){
    //     static int x=0;
    //     x++;
    //     return fun1(n-1)+x;
    // }


    if(n>0){
        x++;
        return fun1(n-1)+x;
    }

    return 0;
}

int main(){
    int x;
    cout<<"Enter x ";
    cin>>x;
    cout<<fun1(x);

    return 0;
}