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

        Node *last;
        last=head;

        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=A[i];
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }
    }

    void Display(){
        Node *p=head;
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }

    void Duplicates(Node *p,Node *q){
        if(p->data!=q->data){
            p=q;
            q=q->next;
            Duplicates(p,q);
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
};
int main(){
    Node n;
    int B[]={1,2,3,3,4,5,6};
    int n1=sizeof(B)/sizeof(B[0]);
    n.Create(B,n1);
    n.Display();
    Node *p=n.head;
    Node *q=p->next;
    n.Duplicates(p,q);
    n.Display();
    return 0;
}