#include <iostream>
using namespace std;
class Node{

    public:
    Node *head;
    int data;
    Node *next;

    void Create(){
        head=new Node;
        int n;
        cout<<"Enter the number of elements "<<endl;
        cin>>n;
        int *B=new int[n];
        cout<<"Enter ";
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
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
        delete []B;
        Node *p=head;
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }

        cout<<"/0"<<endl;
    }



    void Display(){
        Node *p=head;
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
    n.Display();
    return 0;
}