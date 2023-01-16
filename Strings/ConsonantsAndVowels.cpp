#include <iostream>
#include <string.h>
using namespace std;
class String{
    char A[11] = "JatinShiv/";
    public:
    void Print(){
        cout<<A<<endl;
    }
    void ConsonantsVowels(){
        int count=0;
        int word=0;
        for(int i=0;A[i]!='\0';i++){
            if(A[i]=='a'||A[i]=='A'||A[i]=='e'||A[i]=='E'||A[i]=='i'||A[i]=='I'||A[i]=='o'||A[i]=='O'||A[i]=='u'||A[i]=='U'){
                count++;
            }
            else if(!(A[i]>=97 && A[i]<=122)&&!(A[i]>=65 && A[i]<=90)&&!(A[i]>=48 && A[i<=57])){
                cout<<"Invalid Variable "<<A[i]<<endl;
            }
            else{
                word++;
            }

            }
            cout<<"Vowels are "<<count<<endl;
            cout<<"Consonants are "<<word<<endl;
    }
};
int main(){
    String s;
    s.Print();
    s.ConsonantsVowels();
    return 0;
}