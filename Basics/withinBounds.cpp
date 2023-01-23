#include <iostream>
using namespace std;
int main(){

    int num{},num1{10},num2{20};
    cout<<"We are checking if the number you will be entering is within bounds or not"<<endl;
    bool within_bounds{};
    cout<<boolalpha;
    cout<<"Enter a number :";
    cin>>num;
    within_bounds=(num>=10 && num<=20);

    cout<<"true means your number Entered is within bounds and false means the opposite. "<< within_bounds <<endl;

    return 0;
}