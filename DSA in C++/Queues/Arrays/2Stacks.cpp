#include <iostream>
using namespace std;
class Queue{
    int *S1;
    int count1;
    int top1;
    int *S2;
    int top2;

    public:
    Queue(){
        top1=-1;
        top2=-1;
    }

    void Create(int A[],int n){
        count1=n;
        S1=new int[count1];
        S2=new int[count1];
        for(int i=0;i<count1;i++){
            S1[i]=0;
            S2[i]=0;
        }
        for(int i=count1-1;i>=0;i--){
            top1++;
            if(top1==count1){
                cout<<"Queue FULL"<<endl;
                return;
            }
            else{
                S1[top1]=A[i];
            }
        }
    }

    void push(int x){
        top2++;
        if(top2==count1){
            cout<<"Queue Full."<<endl;
            return;
        }
        else{
            S2[top2]=x;
        }
    }

    int pop(){
        int x=-1;
        if(top1==-1){
            if(top2!=-1){
                for(int i=top2;i>0;i--){
                    top1++;
                    S2[top1]=S1[i];
                }
                x=S1[top1];
                S1[top1]=0;
                top1--;
                return x;
            }
            else{
                cout<<"Queue Empty."<<endl;
                return x;
            }
        }
        else{
            x=S1[top1];
            S1[top1]=0;
            top1--;
            return x;
        }
    }

    void Display(){
        cout<<"|S2|||S1|"<<endl;
        for(int i=top2, j=top1;i<count1;i++,j++){
            cout<<"|"<<S2[i]<<"|||"<<S1[j]<<"|"<<endl;
        }
    }
};
int main(){
    Queue q;
    int A[]={8,9,6,5,10,30,12};
    int n=sizeof(A)/sizeof(A[0]);
    q.Create(A,n);
    q.Display();
    q.push(4);
    q.Display();
    for(int i=0;i<n+1;i++){
        q.pop();
        q.Display();
    }
    return 0;
}