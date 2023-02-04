#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
class Array{
    private:
    
    T n;

    public:
    void EnterSize(){
        T n1;
        cout<<"Enter the size of the array ";
        cin>>n1;
        n=n1;
    }


    T array[];

    T add();
    T print();

};

template <class T>
T Array <T>:: add(){
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1 <<" element ";
        cin>>array[i];
    }
}

template <class T>
T Array <T>:: print(){
    for(int i=0; i<n; i++){
        cout<<"The "<<i+1<<" Element is "<<array[i]<<endl;
    }
}

int main()
{
    char c1;
    Array <int> obj1;
    obj1.EnterSize();
    obj1.add();
    cout<<"Do you want to print the elements you added to the array? (Y/N) ";
    cin>> c1;
    if(c1=='Y'||'y'){
        cout<<"here you go!"<<endl;
        obj1.print();
    }
    else{
        cout<<"Goodbye"<<endl;
    }

    getch();
    return 0;

}