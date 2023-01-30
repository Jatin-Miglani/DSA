#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Create(int A[],int n){
        head=new Node;
        head->data=A[0];
        head->next=nullptr;
        Node *last=head;

        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=A[i];
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }
    }

    void Display(){
        Node *p=head;
        int count=0;
        while(p!=nullptr){
            count++;
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
        cout<<"the number of elements are "<<count<<endl;
    }

    int Check(){
        Node *p=head;
        int x=p->data;
        p=p->next;
        int count=0;
        int check=0;
        while(p!=nullptr){
            count++;
            if(p->data>x){
                x=p->data;
                check++;
            }
            p=p->next;
        }
        if(count==check){
            cout<<"Sorted Linked List"<<endl;
        }
        else{
        cout<<"Not Sorted "<<endl;
        }
    }
};
int main(){
    Node n;
    int A[]={11,25,46,78,85,102};
    int n1=sizeof(A)/sizeof(A[0]);
    n.Create(A,n1);
    n.Display();
    n.Check();
    return 0;
}