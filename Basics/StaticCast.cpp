#include <iostream>
using namespace std;
int main(){
    int total{};
    int num1{}, num2{}, num3{};
    const int count {3};

    cout<<"Enter 3 integers seperated by spaces";
    cin>>num1>>num2>>num3;

    total = num1 + num2 + num3;

    double average{0.00};
    // average = total/count;

     //So use this program
    average = static_cast<double>(total)/(count);

    cout<<"the three numbers were "<<num1<<","<<num2<<","<<" and "<<num3<<" respectively. Also the average of these 3 numbers is "<<average<<endl;

    return 0;
}

/* In this program if i take three numbers as 10, 20, 30 then total will be 60 and average will be printed as 30 this is because the average is converted to integers but when the three numbers are 20,20,10 then the result should be 16.67 as an average but the compiler will print 16 this is beaacuse the avg data type is converte dto integer if we doesnt use static_cast*/

