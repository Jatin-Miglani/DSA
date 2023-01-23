#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    bool equal{};
    bool not_equal{};

    // cout<<boolalpha; 
    // if we use cout<<boolalpha the reult will be printed in form of true false not 0,1.

    cout<<"Enter two numbers seperated by spaces :";
    cin>>num1>>num2;
    equal=(num1==num2);
    not_equal=(num1!=num2);
    cout<<"Equality (equal)"<<equal<<endl;
    cout<<"Inequality (not equal)"<<not_equal<<endl;
    return 0;

}