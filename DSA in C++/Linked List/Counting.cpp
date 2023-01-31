#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Create(){
        int *B;
        int n;
        cout<<"Enter the number of elements ";
        cin>>n;
        B=new int[n];
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        head=new Node;
        head->data=B[0];
        head->next=nullptr;

        Node *last;
        last=head;

        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=B[i];
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }
        delete []B;

    }

    // void DisplayandCount(){
    //     Node *p=head;
    //     int count=0;
    //     while(p!=nullptr){
    //         count++;
    //         cout<<p->data<<"->";
    //         p=p->next;
    //     }
    //     cout<<"/0"<<endl;
    //     cout<<count<<endl;
    // }

    int DisplayandCount(Node *p){
        if(p!=nullptr){
            cout<<p->data<<"->";
            return DisplayandCount(p->next)+1;
        }
        else{
            cout<<"/0"<<endl;
            return 0;
        }
    }
};
int main(){
    Node n;
    n.Create();
    Node *b=n.head;
    cout<<n.DisplayandCount(b);
    return 0;
}
