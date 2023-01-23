#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Create(int B[],int n){
        head=new Node;
        head->data=B[0];
        head->next=nullptr;

        Node *last;
        last=head;
        Node *temp;

        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=B[i];
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }
    }

    void Max(Node *p){
        int max=-32768;
        while(p!=nullptr){
            if(p->data>max){
                max=p->data;
            }
            p=p->next;
        }

        cout<<max<<endl;
    }

    void Min(Node *p){
        int min=head->data;
        while(p!=nullptr){
            if(p->data<min){
                min=p->data;
            }
            p=p->next;
        }
        cout<<min<<endl;
    }

    void Display(Node *p){
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }
};
int main(){
    Node n;
    int A[]={2,5,8,3,9};
    int n1=sizeof(A)/sizeof(A[0]);
    n.Create(A,n1);
    Node *b=n.head;
    n.Max(b);
    n.Min(b);
    n.Display(b);
    return 0;
}