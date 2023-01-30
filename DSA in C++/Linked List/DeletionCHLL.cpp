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
        head=new Node;
        top->data=404;
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
        int count=0;
        do
        {   
            if(count==0){
                cout<<"|"<<p->data<<"|"<<"->";
            }
            else{
                cout<<p->data<<"->";
            }
            p=p->next;
            count++;
        } while (p!=top);
        
        cout<<"<>"<<endl;
    }

    int Delete(int a){
        Node *p=NULL;
        Node *q=top;
        int count=-1;
        do
        {
            count++;
            if(a==count){
                Node *temp;
                temp->data=q->data;
                temp->next=nullptr;
                p->next=q->next;
                return 0;
            }
            if(q->next==top && a==count){
                Node *temp;
                temp->data=q->data;
                temp->next=nullptr;
                p->next=top;
            }
            p=q;
            q=q->next;
        } while (q!=top);
        
    }
};
int main(){
    int A[]={23,67,12,98,26,57,45,39,76};
    int n1=sizeof(A)/sizeof(A[0]);
    Node n;
    n.Create(A,n1);
    n.Display();
    n.Delete(1);
    n.Display();
    return 0;
}
