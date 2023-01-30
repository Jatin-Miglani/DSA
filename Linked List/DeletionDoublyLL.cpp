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
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
        p=end;
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->prev;
        }
        cout<<"/0"<<endl;
    }

    void Delete(int a){
        Node *p=NULL;
        Node *q=head;
        int count=0;
        while(q!=nullptr){
            count++;
            cout<<count<<endl;
            if(a==count){
                if(a==1){
                    (q->next)->prev=nullptr;
                    head=q->next;
                    return;
                }
                if(q->next==nullptr){
                    (q->prev)->next=nullptr;
                    end=q->prev;
                    return;
                }
                else{
                    p->next=q->next;
                    (q->next)->prev=p;
                    return;
                }
            }
            p=q;
            q=q->next;
        }
        // if(a>count){
        //     (p->prev)->next=nullptr;
        //     end=q->prev;
        //     return;
        // }
    }
};
int main(){
    int A[]={2,9,1,8,4,5};
    int n1=sizeof(A)/sizeof(A[0]);
    Node n;
    n.Create(A,n1);
    n.Display();
    n.Delete(6);
    n.Display();
    return 0;
}