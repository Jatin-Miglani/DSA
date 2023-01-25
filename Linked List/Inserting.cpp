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
    void Insert(int i,int a){
        Node *p=head;
        Node *q=NULL;
        int count=0;
        while(p!=nullptr){
            count++;
            if(count==i){
                Node *temp=new Node;
                temp->data=a;
                temp->next=q->next;
                q->next=temp;
                // q->next=p->next;
                // p->next=head;
                // head=p;
            }
            q=p;
            p=p->next;
        }
    }
};
int main(){
    Node n;
    int B[]={87,45,67,23,1,49,100};
    int n1=sizeof(B)/sizeof(B[0]);
    n.Create(B,n1);
    Node *b=n.head;
    n.Display(b);
    n.Insert(4,35);
    Node *b1=n.head;
    n.Display(b1);
    return 0;
}