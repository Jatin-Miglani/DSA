#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class String{
    char name[100];
    public:

    void Declare(){
        char num[100];
        cout<<"Enter ";
        cin>>num;
        strcpy(name,num);
        cout<<name<<endl;

    }

    void ChangeCase(){
        int i=0;
        while(name[i]!='\0'){
            if(name[i]>=65&&name[i]<=90){
                name[i]=name[i]+32;
            }
            else{
                name[i]=name[i]-32;
            }
            i++;
        }
        cout<<"The changed case is "<<name<<endl;
    }
};

int main(){
    String s;
    s.Declare();
    s.ChangeCase();
    return 0;
}