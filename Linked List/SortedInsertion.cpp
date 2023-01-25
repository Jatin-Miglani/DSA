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
        int count=0;
        while(p!=nullptr){
            count++;
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
        cout<<"The number of elements are "<<count<<endl;
    }

    void Insert(int a){
        Node *p=head;
        Node *q=NULL;
        while(p!=nullptr){
            if(p->data>=a){
                Node *temp=new Node;
                temp->data=a;
                temp->next=p;
                q->next=temp;
                return;
            }
            q=p;
            p=p->next;
        }
    }
};
int main(){
    Node n;
    int B[]={56,65,71,89,91,99,107};
    int n1=sizeof(B)/sizeof(B[0]);
    n.Create(B,n1);
    n.Display();
    n.Insert(100);
    n.Display();
    return 0;
}