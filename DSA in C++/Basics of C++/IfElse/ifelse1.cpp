#include <iostream>
using namespace std;
int main(){
    int num{};
    const int min{10};
    const int max{100};

    cout<<"Enter a number of your Choice. The maximum and minimum ranges are "<<max<<" and "<<min<<" respectively :";
    cin>>num;

    if (num<min){
        cout<<num<<"is less than"<<min<<endl;

        int diff{};
        diff=min-num;
        cout<<"The difference between "<<min<<" and "<<num<<" is "<<diff<<endl;
        cout<<"Just move "<<diff<<" steps ahead"<<"\n";

    }

    if(num>max){
        cout<<num<<"is greater than"<<max<<endl;

        int diff{};
        diff=num-max;
        cout<<"The difference between "<<num<<" and "<<max<<" is "<<diff<<endl;
        cout<<"Just move "<<diff<<" steps behind"<<"\n";


    }
    if(num>min && num<max){
        cout<<"The number entered is in range "<<min<<" - "<<max<<endl;

    }

    return 0;
}