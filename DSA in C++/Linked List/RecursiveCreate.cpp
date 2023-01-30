#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Create(){
        int n;
        cout<<"Enter the number of elements ";
        cin>>n;
        int *A=new int[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }

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

        delete []A;
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
    n.Create();
    Node *b=n.head;
    n.Display(b);
    return 0;
}