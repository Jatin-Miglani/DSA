#include <iostream>
using namespace std;
int main(){
    double amount{0};
    cout<<"Enter the number of Euros you have!"<<endl;
    cin>>amount;
    //1 dollar = 0.98 euros;
    double dollar{0};
    dollar= 1/0.98;
    dollar = dollar * amount;
    cout<<"so in that case you have $ "<<dollar<<endl;

    return 0;
}
