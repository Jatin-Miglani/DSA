#include <iostream>
using namespace std;
int main(){
    int cents{};
    cout<<"Enter the number of cents you have(US DOLLAR CENTS) ";
    cin>>cents;

    // if(cents==100){
    //     cout<<"You have 1 dollar"<<endl;
    //     cout<<"You have 4 Quaters"<<endl;
    //     cout<<"You have 10 dimes"<<endl;
    //     cout<<"You have 20 nickels"<<endl;
    //     cout<<"You have 100 pennies"<<endl;
    // };
    // if(cents ==25){
    //     cout<<"You have 0 dollar"<<endl;
    //     cout<<"You have 1 Quater"<<endl;
    //     cout<<"You have 2 dimes"<<endl;
    //     cout<<"You have 5 nickels"<<endl;
    //     cout<<"You have 25 pennies"<<endl;
    // };
    // if(cents ==10){
    //     cout<<"You have 0 dollar"<<endl;
    //     cout<<"You have 0 Quater"<<endl;
    //     cout<<"You have 1 dime"<<endl;
    //     cout<<"You have 2 nickels"<<endl;
    //     cout<<"You have 10 pennies"<<endl;
    // };
    // if(cents ==5){
    //     cout<<"You have 0 dollar"<<endl;
    //     cout<<"You have 0 Quater"<<endl;
    //     cout<<"You have 0 dimes"<<endl;
    //     cout<<"You have 1 nickel"<<endl;
    //     cout<<"You have 5 pennies"<<endl;
    // };
    //  if(cents ==1){
    //     cout<<"You have 0 dollar"<<endl;
    //     cout<<"You have 0 Quater"<<endl;
    //     cout<<"You have 0 dimes"<<endl;
    //     cout<<"You have 0 nickels"<<endl;
    //     cout<<"You have 1 penny"<<endl;
    // };

    
    int dollar;
    dollar = cents/100;
    int quarter;
    quarter = cents/25;
    int dime;
    dime = cents/10;
    int nickel;
    nickel = cents/5;
    int penny;
    penny = cents;

    cout<< "You have "<<dollar<<" Dollar"<<endl;
    cout<< "You have "<<quarter<<" Quarter"<<endl;
    cout<< "You have "<<dime<<" Dime"<<endl;
    cout<< "You have "<<nickel<<" Nickel"<<endl;
    cout<< "You have "<<penny<<" Penny"<<endl;




    return 0;




}