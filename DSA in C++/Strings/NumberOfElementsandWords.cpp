#include <iostream>
#include <string.h>
using namespace std;
class String{
    char A[100]="Mr Jatin Miglani ??";
    public:
    void print(){
        cout<<A<<endl;
    }
    void Check(){
        int count=0;
        int word=1;
        for(int i=0;A[i]!=0;i++){
            if(!(A[i]>=97 && A[i]<=122)&&!(A[i]>=65 && A[i]<=90)&&!(A[i]>=48 && A[i<=57])){
                cout<<A[i]<<"is invalid."<<endl;
            }
            if(A[i]==' '&& A[i-1]!=' '){
                word++;
            }
            else{
                count++;
            }

        }
        cout<<"The string contains "<<count<<" elements."<<endl;
        cout<<"The number of words are "<<word<<endl;
    }


};
int main(){
    String s;
    s.print();
    s.Check();
    return 0;
}