#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Create(int A[],int n){
        head=new Node;
        head->data=A[0];
        head->next=nullptr;

        Node *last=head;
        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=A[i];
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }
        //In order to checkLoop Uncomment these.
        //temp->next=head;

    }

    void Display(){
        Node *p=head;
        while(p){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }

    void CheckLoop(){
        Node *p=head;
        Node *q=head;
        p=p->next;
        q=(q->next)->next;
        if(p->next==q->next){
            cout<<"LOOP Hai bhai"<<endl;
        }
        while(q!=nullptr){
            if(p->next==q->next){
                cout<<"LOOP Hai bhai"<<endl;
                return;
            }
            p=p->next;
            q=(q->next)->next;
        }
        cout<<"Linear Hai bro"<<endl;
    }
};
int main(){
    int A[]={6,8,3,9,2,10};
    int n1=sizeof(A)/sizeof(A[0]);
    Node n;
    n.Create(A,n1);
    n.CheckLoop(); 
    return 0;

}