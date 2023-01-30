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

    void Display(Node *p){
       while(p!=nullptr){
        cout<<p->data<<"->";
        p=p->next;
       } 
       cout<<"/0"<<endl;
    }

    void Search(int s,Node *p,Node *q){
        p=head;
        q=new Node;
        int count=0;
        while(p!=nullptr){
            count++;
            if(p->data==s){
                cout<<"Found at "<<count<<endl;
                //Deletion ka program ban gya pta nhi kaise.
                // q->next=p->next;
                // Node *temp=head;
                // p->next=temp;
                // head=p;
                q->next=p->next;
                p->next=head;
                head=p;
                return;
            }
            q=p;
            p=p->next;
        }
    }
};
int main(){
    Node n;
    int B[]={3,9,1,7,2,8};
    int n1=sizeof(B)/sizeof(B[0]);
    n.Create(B,n1);
    Node *b=n.head;
    n.Display(b);
    //Move to head and Searching Combined.
    Node *a=NULL;
    n.Search(8,b,a);
    Node *b1=n.head;
    Node *a1=NULL;
    n.Display(b1);
    n.Search(8,b1,a1);

    return 0;
}