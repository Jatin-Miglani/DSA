#include <iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
    Node *head;
    Node *end;

    void Create(int A[],int n){
        head=new Node;
        head->prev=nullptr;
        head->data=A[0];
        head->next=nullptr;
        Node *last=head;
        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->prev=last;
            temp->data=A[i];
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }
        end=temp;
    }

    void Display(){
        Node *p=head;
        while(p!=nullptr){
            cout<<p->data<<"<>";
            p=p->next;
        }
        cout<<"/0"<<endl;
        p=end;
        while(p!=nullptr){
            cout<<p->data<<"<>";
            p=p->prev;
        }
        cout<<"/0"<<endl;
    }

    void Reverse(){
        Node *p=head;
        Node *temp=NULL;
        end=p;
        while(p!=nullptr){
            temp=p->prev;
            p->prev=p->next;
            p->next=temp;
            p=p->prev;
        }
        if(temp!=NULL){
            head=temp->prev;
        }
    }
};
int main(){
    int A[]={9,6,2,8,4,1};
    int n1=sizeof(A)/sizeof(A[0]);
    Node n;
    n.Create(A,n1);
    n.Display();
    n.Reverse();
    n.Display();
    return 0;
}