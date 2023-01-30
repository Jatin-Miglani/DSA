#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;
    int count;

    void Create(){
        int n;
        cout<<"Enter the number of elements "<<endl;
        cin>>n;
        head=new Node;
        int *A=new int[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
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
        count=n;
        delete []A;

    }

    void Display(){
        Node *p=head;
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }

    void ReverseD(){
        int *A=new int[count];
        Node *p=head;
        int i=0;
        while(p!=nullptr){
            A[i]=p->data;
            i++;
            p=p->next;
        }
        i--;
        p=head;
        while(p!=nullptr){
            p->data=A[i];
            i--;
            p=p->next;
        }
        delete []A;
    }

    void ReverseL(){
        Node *p=head;
        Node *q=NULL;
        Node *r=NULL;
        while(p!=nullptr){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
    }
};
int main(){
    Node n;
    n.Create();
    cout<<"Simple Linked list is ";
    n.Display();
    cout<<endl<<"Reversed Linked list is ";
    n.ReverseL();
    n.Display();
    return 0;
}