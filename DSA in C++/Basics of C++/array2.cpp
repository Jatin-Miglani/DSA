#include <iostream>
using namespace std;
int main(){
    double temp[] {90.1,100.1,89,4,91,2};
    
    cout<<"the first temperature is "<<temp[0]<<endl;
    cout<<"enter the new value for first temperature"<<endl;
    cin>>temp[0];
    cout<<"the first temperature is "<<temp[0]<<endl;

    return 0;

}