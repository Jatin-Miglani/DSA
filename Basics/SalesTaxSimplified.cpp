#include <iostream>
using namespace std;
int main(){

    cout<<"Welcome!!! to Frank's Carpet Cleaning Services "<<endl;
    unsigned int rooms;
    cout<<"How many rooms would you like to get:";
    cin>>rooms;
    const double price{30};
    const double tax{0.06};
    const int expiry{30};
    //This program is written using constants in order to use replace in near future if prices,tax and expiry date changes.
    cout<<"The price per room is: $"<<price<<endl;

    cout<<"The cost is $"<<price*rooms<<endl;

    cout<<"The tax is $"<<price*rooms*tax<<endl;
    cout<<"=================================="<<endl;

    cout<<"The overall cost of the room is $"<<(price*rooms)+(price*rooms*tax)<<endl;
    cout<<"The deal is valid for only "<<expiry<<" days"<<endl;
    cout<<"Namaskaar";

    return 0;

}