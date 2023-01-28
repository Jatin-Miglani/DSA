#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;
    Node *top;

    void Create(int A[],int n){
        top=new Node;
        top->data=84048;
        top->next=head;
        head->data=A[0];
        head->next=top;
        Node *last=head;
        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=A[i];
            temp->next=top;
            last->next=temp;
            last=temp;
        }
    }

    void Display(){
        Node *p=top;
        do
        {
            cout<<p->data<<"->";
            p=p->next;
        } while (p!=top);
        cout<<"<>"<<endl;
    }

    int Insert(int s,int a){
        Node *p=NULL;
        Node *q=top;
        Node *r=top;
        int count=-1;
        // count++;
        // if(a==count){
        //     Node *temp=new Node;
        //     temp->data=s;
        //     temp->next=q;
        //     q=temp;
        // }
        // p=q;
        // q=q->next;
        do
        {
            count++;
            cout<<count<<endl;
            if(a==count){
                Node *temp=new Node;
                temp->data=s;
                temp->next=q;
                p->next=temp;
                break;
            }
            p=q;
            q=q->next;

        } while (q!=top);
        if(a>count){
            Node *temp=new Node;
            temp->data=s;
            temp->next=r;
            p->next=temp;
            return 0;
        }
    }
};

int main(){
    int A[]={7,8,2,4,5,9};
    int n1=sizeof(A)/sizeof(A[0]);
    Node n;
    n.Create(A,n1);
    n.Display();
    n.Insert(3,1);
    n.Display();
    return 0;
}