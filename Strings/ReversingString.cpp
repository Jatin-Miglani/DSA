#include <iostream>
#include <string.h>
using namespace std;
class String{
    char name[10];
    public:
    void Declare(){
        char num[10];
        cout<<"Enter the string "<<endl;
        cin>>num;
        strcpy(name,num);
    }

    void Reverse(){
        char B[10];
        // for(int i=0;name[i]!='\0';i++){
        //     B[i]=name[sizeof(B)/sizeof(B[0])-i-1];
        // }
        // for(int i=0;name[i]!='\0';i++){
        //     name[i]=B[i];
        // }
        // cout<<"Reversed name is "<<name<<endl;
        int i=0;
        int j=sizeof(B)/sizeof(B[0])-1;
        while(i<j){
            char temp=name[i];
            name[i]=name[j];
            name[j]=temp;
            i++;
            j--;
        }
        cout<<"Reversed name is "<<name<<endl;
    }
};
int main(){
    String s;
    s.Declare();
    s.Reverse();
}