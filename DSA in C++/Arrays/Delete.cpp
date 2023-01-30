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

    void Insert(){
        cout<<"Enter at what index you want to insert your Element ";
        int a;
        cin>>a;
        for(int i=length;i>a;i--){
            A[i]=A[i-1];
        }
        cout<<"enter ";
        cin>>A[a];
        length++;
    }

    void Delete(){
        cout<<"Enter the index of element you want to delete ";
        int d;
        cin>>d;
        int x=A[d];
        for (int i=d;i<length;i++){
            A[i]=A[i+1];
        }
        length--;
        cout<<"DELETED ELEMENT IS "<<x<<endl;
    }

};

int main(){
    Array A;
    A.create();
    A.enter();
    A.Display();
    A.Delete();
    A.Display();

    return 0;
}