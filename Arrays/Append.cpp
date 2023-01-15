#include <iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;

    public:
    Array(){
        int a;
        cout<<"Enter the size of Array ";
        cin>>a;
        size=a;
    }

    void create(){
        A=new int[size*sizeof(int)];
        cout<<"Enter the number of elements you want to enter ";
        int n;
        cin>>n;
        length=n;
    }

    void enter(){
        for(int i=0;i<length;i++){
            cin>>A[i];
        }
    }

    void Display(){
        cout<<"[";
        for(int i=0;i<length;i++){
            cout<<" "<<A[i]<<" ";
        }
        cout<<"]";
    }

    void Append(){
        cout<<"How many elements you want to append ";
        int a;
        cin>>a;
        for(int i=1;i<=a;i++){
            cout<<"Enter the element ";
            cin>>A[length];
            length++;
        }
    }

};

int main(){
    Array A;
    A.create();
    A.enter();
    A.Display();
    A.Append();
    A.Display();

    return 0;
}