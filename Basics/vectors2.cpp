#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> numbers {10,20,30,40,50};
    cout<<"first"<<numbers.at(0)<<endl;
    cout<<"second"<<numbers.at(1)<<endl;
    cout<<"third"<<numbers.at(2)<<endl;

    cout<<sizeof(numbers);

    return 0;

}