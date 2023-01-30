#include <iostream>
using namespace std;

//In this program I am going to calculate the area of a Room

int main(){
    int a{0};
    int b{0};
    int c{0};

    cout<<"Enter the length of the room in feet"<<endl;
    cin>>a;
    cout<<"Enter the length of the room in feet"<<endl;
    cin>>b;
    c=a*b;
    cout<<"The are of your room is "<<c<<" Sq.ft"<<endl;

    return 0;

}