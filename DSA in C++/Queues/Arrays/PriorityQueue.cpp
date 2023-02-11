#include <iostream>
using namespace std;
class Queue{
    int *Q;
    int count;

    public:
    void Create(int A[],int n){
        Q=new int[n];
        for(int i=0;i<n;i++){
            Q[i]=A[i];
        }
        count=n;
    }

    void Delete(){
        int min=Q[0];
        int x=0;
        for(int i=1;i<count;i++){
            if(min>Q[i]){
                min=Q[i];
                x=i;
            }
        }
        cout<<"Delete Element "<<min<<" at Index "<<x<<endl;

        Q[x]=0;
        for(int i=x;i<count-1;i++){
            Q[i]=Q[i+1];
        }
        count--;
    }

    void Display(){
        for(int i=0;i<count;i++){
            cout<<Q[i]<<"|";
        }
        cout<<endl;
    }

};
int main(){
    Queue q;
    int A[]={8,9,6,5,10,30,12};
    int n=sizeof(A)/sizeof(A[0]);
    q.Create(A,n);
    q.Display();
    q.Delete();
    q.Display();
    return 0;
}