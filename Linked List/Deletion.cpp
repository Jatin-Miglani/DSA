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

    int Delete(int a){
        Node *p=head;
        Node *q=NULL;
        int count=0;
        while(p!=nullptr){
            count++;
            if(p->data==a){
                cout<<"Found at "<<count<<endl;
                Node *temp=new Node;
                q->next=p->next;
                temp->data=p->data;
                p->next=temp;
                return 0;
            }
            q=p;
            p=p->next;
        }
    }
};
int main(){
    Node n;
    int A[]={65,23,87,11,19,56};
    int n1=sizeof(A)/sizeof(A[0]);
    n.Create(A,n1);
    n.Display();
    n.Delete(11);
    n.Display();
    return 0;
}