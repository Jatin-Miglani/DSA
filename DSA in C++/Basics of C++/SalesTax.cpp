#include <iostream>
using namespace std;
int main(){
    
    cout<<"Welcome!!! to Frank's Carpet Cleaning Services "<<endl;
    unsigned int rooms;
    cout<<"How many rooms would you like to get:";
    cin>>rooms;
    
    cout<<"The price per room is: $"<<30<<endl;

    cout<<"The cost is $"<<30*rooms<<endl;

    cout<<"The tax is $"<<30*rooms*0.06<<endl;
    cout<<"=================================="<<endl;

    cout<<"The overall cost of the room is $"<<(30*rooms)+(30*rooms*0.06)<<endl;
    cout<<"The deal is valid for only 30 days"<<endl;
    cout<<"Namaskaar";
    
    return 0;
}