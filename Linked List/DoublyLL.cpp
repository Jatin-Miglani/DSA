#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node *prev;
    Node *head;
    Node *end;

    void Create(){
        head=new Node;
        int n;
        cout<<"Enter the size of linked List ";
        cin>>n;
        int *A=new int[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        head->data=A[0];
        head->next=nullptr;
        head->prev=nullptr;
        Node *last=head;
        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=A[i];
            temp->next=nullptr;
            last->next=temp;
            temp->prev=last;
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
};
int main(){
    Node n;
    n.Create();
    n.Display();
}