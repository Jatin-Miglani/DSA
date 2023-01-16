#include <iostream>
#include <string.h>
using namespace std;
class String{
    char name[20];
    public:
    void Declare(){
        char n[20];
        char *s;
        cout<<"Enter the string name ";
        cin>>n;
        strcpy(name,n);
    }
    void Print(){
        cout<<name<<endl;
    }

};
int main(){
    String S;
    S.Declare();
    S.Print();
    return 0;
}

// int main(){
//     //Different ways to declare array.
//     //char *name = "JATIN";
//     //char name[20] = "JATIN";
//     char name[20]={'j','\0'};
//     cout<<name<<endl;
//     cin>>name;
//     cout<<name<<endl;
// }