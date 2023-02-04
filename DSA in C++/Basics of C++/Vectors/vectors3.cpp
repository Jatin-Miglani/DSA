#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> numbers {10,20,30};
    cout<<"SECOND"<<numbers[1]<<endl;
    cout<<"The initial size of array is "<<numbers.size()<<endl;
    int new_number;
    cout<<"Enter to push one number";
    cin>>new_number;
    numbers.push_back(new_number);
    cout<<"last element"<<numbers.at(3);

    return 0;
}