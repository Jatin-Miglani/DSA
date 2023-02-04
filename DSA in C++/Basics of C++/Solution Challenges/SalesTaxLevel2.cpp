#include <iostream>
using namespace std;
int main(){
    cout<<"Hello Everyone Welcome Back To Franck's Cleaning Services. Hope you are doing Great It was great to Connect to Everyone in the last program and here we are again back after renovation of our rooms."<<endl;
    unsigned int small_rooms;
    cout<<"How many small rooms would you like to book:";
    cin>>small_rooms;
    unsigned int large_rooms;
    cout<<"How many large rooms would you like to book:";
    cin>>large_rooms;
    const double small_room_price{25.0};
    const double large_room_price{35.0};
    const double tax{0.06};
    const int expiry{30};
    cout<<"The cost for"<<small_rooms<<"small rooms would be $"<<small_room_price*small_rooms<<endl;
    cout<<"The cost for "<<large_rooms<<" large rooms would be $"<<large_room_price*large_rooms<<endl;
    cout<<"The Total Cost for both small rooms and large rooms would be $"<<(small_room_price*small_rooms)+(large_room_price*large_rooms)<<endl;
    cout<<"The total service tax imposed is $"<<(small_room_price*small_rooms*tax)+(large_room_price*large_rooms*tax)<<endl;
    cout<<"The overall cost of all the rooms including service tax is $"<<((small_room_price*small_rooms)+(large_room_price*large_rooms))+((small_room_price*small_rooms*tax)+(large_room_price*large_rooms*tax))<<endl;

    cout<<"This deal is only valid for "<<expiry<<" days"<<endl;

    return 0;
}