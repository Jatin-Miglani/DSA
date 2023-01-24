#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;

    void Display(int A[],int n){
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

        Node *p=head;
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
    }

    void Search(int s){
        Node *p=head;
        int count=0;
        while(p!=nullptr){
            count++;
            if(p->data==s){
                cout<<"Found at "<<count<<endl;
            }
            p=p->next;
        }
    }
};
int main(){
    int B[]={2,4,6,8,10};
    int n1=sizeof(B)/sizeof(B[0]);
    Node n;
    
    n.Display(B,n1);
    n.Search(8);

    return 0;

}