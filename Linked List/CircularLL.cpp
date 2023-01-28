#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Create(){
        int n;
        cout<<"Enter the size of linked list ";
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
            temp->data=A[i];
            temp->next=head;
            last->next=temp;
            last=temp;
        }
    }

    void Display(){
        Node *p=head;
        do
        {
            cout<<p->data<<"->";
            p=p->next;
        } while (p!=head);
        
        cout<<"<>"<<endl;
    }
};
int main(){
    Node n;
    n.Create();
    n.Display();
    return 0;
}