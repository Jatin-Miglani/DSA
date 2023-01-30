#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Create(){
        int *B;
        int n;
        cout<<"Enter the number of integers ";
        cin>>n;
        B=new int[n];
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
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

    void Display(Node *p){
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }

    int Sum(Node *p){
        if(p!=nullptr){
            return Sum(p->next)+p->data;
        }
        else{
            return 0;
        }
    }

};
int main(){
    Node n;
    n.Create();
    Node *b=n.head;
    n.Display(b);
    cout<<n.Sum(b)<<endl;
    return 0;
}