#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int length{};
    int width{};
    int height{};

    const int lengthbox{13};
    const int widthbox{13};
    const int heightbox{13};
   
   cout<<"Welcome to Sydney's Sipping Services"<<endl;
   cout<<"Please enter length,width and height of your box seperated by spaces : ";
   cin>>length>>width>>height;


    cout<<fixed<<setprecision(2);
    if(length>=lengthbox||width>=lengthbox||height>=heightbox){
        cout<<"Shipping denied!! Dimensions Exceeded";
    }
    else{
        int volume{};
        const double cost{2.25};
        int tax{};
    
        volume=length*width*height;
        cout<<"The volume of box is "<<volume<<" inches^3"<<endl;
        if(volume>=125){
            cout<<"So your cost including taxes is"<<cost+(cost*0.3)<<endl;

        }
        else{
            cout<<"Cost of Shipping is"<<cost<<endl;
        }


        
        
    }

    return 0;
}