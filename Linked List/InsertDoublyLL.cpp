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
            cout<<p->data<<"<->";
            p=p->next;
        }
        cout<<"/0"<<endl;
        p=end;
        while(p!=nullptr){
            cout<<p->data<<"<->";
            p=p->prev;
        }
        cout<<"/0"<<endl;
    }
    int Insert(int s,int a){
        Node *p=NULL;
        Node *q=head;
        int count=0;
        while(q!=nullptr){
            count++;
            if(count==a){
                if(a==1){
                    Node *temp=new Node;
                    temp->prev=nullptr;
                    temp->data=s;
                    temp->next=q;
                    q->prev=temp;
                    head=temp;
                    return 0;
                }
                else{
                Node *temp=new Node;
                temp->prev=p;
                temp->data=s;
                temp->next=q;
                p->next=temp;
                q->prev=temp;
                return 0;
                }
            }
            p=q;
            q=q->next;
        }
        if(a>count){
            Node *temp=new Node;
            temp->prev=p;
            temp->data=s;
            temp->next=nullptr;
            p->next=temp;
            end=temp;
            return 0;
        }
    }
};
int main(){
    int A[]={98,67,102,780,34,876,456,100};
    int n1=sizeof(A)/sizeof(A[0]);
    Node n;
    n.Create(A,n1);
    n.Display();
    cout<<"_______________________________________________________________________"<<endl;
    n.Insert(5,9);
    n.Display();
    return 0;
}