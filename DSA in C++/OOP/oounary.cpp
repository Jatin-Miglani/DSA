#include <iostream>
using namespace std;
class A{
    int a;

    public:
    A(){
        int d;
        cin>>d;
        a=d;
    }

    void operator ++(){
        ++a;
    }

    void print(){
        cout<<a<<endl;
    }
};
int main(){
    A obj;
    ++obj;
    obj.print();
    return 0;
}