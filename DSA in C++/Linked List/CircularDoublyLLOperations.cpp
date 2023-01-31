#include <iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
    Node *head;
    Node *end;

    void Create(){
        int n;
        cout<<"Enter n ";
        cin>>n;
        int *A=new int[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        head=new Node;
        head->data=A[0];
        head->next=head;
        Node *last=head;
        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->prev=last;
            temp->data=A[i];
            temp->next=head;
            last->next=temp;
            last=temp;
        }
        end=temp;
        head->prev=end;
        delete []A;
    }
    void Display(){
        Node *p=head;
        do
        {
            cout<<p->data<<"<>";
            p=p->next;
        } while (p!=head);
        cout<<"<>"<<endl;
        p=end;
        do
        {
            cout<<p->data<<"<>";
            p=p->prev;
        } while (p!=end);
        cout<<"<>"<<endl;
    }
    void Insert(int s,int a){
        Node *p=NULL;
        Node *q=head;
        int count=0;
        do
        {
            count++;
            if(a==count){
                if(a==1){
                    Node *temp=new Node;
                    temp->prev=end;
                    temp->data=s;
                    temp->next=q;
                    q->prev=temp;
                    head=temp;
                    end->next=temp;
                    return;
                }
                else{
                    Node *temp=new Node;
                    temp->prev=p;
                    temp->data=s;
                    temp->next=q;
                    p->next=temp;
                    q->prev=temp;
                    return;
                }
            }
            p=q;
            q=q->next;
        } while (q!=head);
        if(a>count){
            Node *temp=new Node;
            temp->prev=p;
            temp->data=s;
            temp->next=head;
            p->next=temp;
            end=temp;
            head->prev=temp;
            return;
        }
        
    }
    void Delete(int a){
        Node *p=NULL;
        Node *q=head;
        int count=0;
        do
        {
            count++;
            cout<<count<<endl;
            if(a==count){
                if(a==1){
                    (q->next)->prev=end;
                    end->next=q->next;
                    head=q->next;
                    return;
                }
                if(q->next==head){
                   (q->prev)->next=head;
                    head->prev=(q->prev);
                    end=q->prev;
                    return; 
                }
                else{
                    (q->next)->prev=p;
                    p->next=q->next;
                    return;
                }
            }
            p=q;
            q=q->next;
        } while (q!=head);
        if(a>count){
            (p->prev)->next=head;
            head->prev=(p->prev);
            end=p->prev;
            return;
        }
        
    }
};
int main(){
    Node n;
    n.Create();
    n.Display();
    cout<<"_______________________________________________________________________"<<endl;
    n.Insert(5,5);
    n.Display();
    cout<<"_______________________________________________________________________"<<endl;
    n.Delete(4);
    n.Display();
    cout<<"_______________________________________________________________________"<<endl;
    return 0;
}
