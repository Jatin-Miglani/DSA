#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;
    Node *second;

    void Create(int A[],int nA,int B[],int nB){
        head=new Node;
        head->data=A[0];
        head->next=nullptr;
        Node *lastA=head;
        Node *tempA;
        for(int i=1;i<nA;i++){
            tempA=new Node;
            tempA->data=A[i];
            tempA->next=nullptr;
            lastA->next=tempA;
            lastA=tempA;
        }
        second=new Node;
        second->data=A[0];
        second->next=nullptr;
        Node *lastB=second;
        Node *tempB;
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
    
    void Merge(Node *p,Node *q){
        while(p->next!=nullptr){
            p=p->next;
        }
        p->next=q;
    }

    void SortedMerge(Node *p,Node *q){
        if(q->data<p->data){
            Node *temp=new Node;
            temp->data=q->data;
            temp->next=p;
            head=temp;
            return;
        }
        q=q->next;
        while(q!=nullptr){
            p=head;
            while(p!=nullptr){
                if(q->data<p->data){
                    Node *temp=new Node;
                    temp->data=q->data;
                    temp->next=p;
                    break;
                }
                p=p->next;
            }
            q=q->next;
        }
    }
};
int main(){
    int A[]={4,5,9,1,8,2};
    int B[]={3,6,7,10,0};
    int nA=sizeof(A)/sizeof(A[0]);
    int nB=sizeof(B)/sizeof(B[0]);
    Node n1;
    n1.Create(A,nA,B,nB);
    Node *a=n1.head;
    Node *b=n1.second;
    n1.Display(a);
    n1.Display(b);

    n1.SortedMerge(a,b);
    Node *a1=n1.head;
    n1.Display(a1);
    return 0;
}