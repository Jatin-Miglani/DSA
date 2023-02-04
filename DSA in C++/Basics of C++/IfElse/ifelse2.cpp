#include <iostream>
using namespace std;
int main(){
    int age{};
    cout<<"Enter your age : ";
    cin>>age;
    if (age>18){
        int ssn{};
        cout<<"Please Enter your Social Security Number : ";
        cin>>ssn;
        cout<<"Verified! You will recieve your Driving license within a month."<<endl;
    

    }
    else{

        if(age<16){
            int n{};
            n=16-age;
            cout<<"Sorry you are Underage. We can't issue you a Driving License. Please inform us in "<<n<<" years"<<endl;

        }
        else{
            cout<<"Please provide us with parents Consent"<<endl;
            cout<<"You must have a verified Social Security Number"<<endl;
            cout<<"You will have a Driving test before we issue you Driving License"<<endl;
        }
    }

    return 0;

}