#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;
    Node *second;
    Node *third;

    void Create(int A[],int nA,int B[],int nB){
        head=new Node;
        second=new Node;
        head->data=A[0];
        head->next=nullptr;
        second->data=B[0];
        second->next=nullptr;
        Node *lastA=head;
        Node *lastB=second;
        Node *tempA;
        Node *tempB;
        for(int i=1;i<nA;i++){
            tempA=new Node;
            tempA->data=A[i];
            tempA->next=nullptr;
            lastA->next=tempA;
            lastA=tempA;
        }
        for(int i=1;i<nB;i++){
            tempB=new Node;
            tempB->data=B[i];
            tempB->next=nullptr;
            lastB->next=tempB;
            lastB=tempB;
        }
    }

    void Display(Node *p){
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }

    void Merge(){
        Node *last=NULL;
        third=NULL;
        if(head->data<second->data){
            third=head;
            last=head;
            head=head->next;
            third->next=NULL;
        }
        if(head->data>second->data){
                third=last=second;
                second=second->next;
                third->next=NULL;
            }
        while(head!=nullptr && second!=nullptr){
            if(head->data<second->data){
                last->next=head;
                last=head;
                head=head->next;
                last->next=NULL;
            }
            if(head->data>second->data){
                last->next=second;
                last=second;
                second=second->next;
                last->next=NULL;
            }
        }
        if(head){
            last->next=head;
        }
        if(second){
            last->next=second;
        }
    }
};
int main(){
    int A[]={2,4,6,8,10};
    int B[]={1,3,5,7,9};
    int nA=sizeof(A)/sizeof(A[0]);
    int nB=sizeof(B)/sizeof(B[0]);
    Node n1;
    n1.Create(A,nA,B,nB);
    Node *a=n1.head;
    Node *b=n1.second;
    n1.Display(a);
    n1.Display(b);
    n1.Merge();
    Node *a1=n1.third;
    n1.Display(a1);
}