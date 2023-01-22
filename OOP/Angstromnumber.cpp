#include <iostream>
using namespace std;
class A{
    int b=115;
    int a=b;
    int n;
    int sum=0;
    public:
    void func1(){
        cout<<"Enter how many digit element? ";
        int digit;
        cin>>digit;
        n=digit;
    }
    void func2(){
        int c;
        
        for(int i=0;i<n;i++){
            c=a%10;
            int mul=1;;
            for(int j=0;j<n;j++){
                mul=mul*c;
            }
            a=a/10;
        sum=sum+mul;
        }
    }
    void check(){
        if(sum==b){
          cout<< "Yes an Angstorm number."<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
};

int main(){
    A obj;
    obj.func1();
    obj.func2();
    obj.check();
    return 0;
}