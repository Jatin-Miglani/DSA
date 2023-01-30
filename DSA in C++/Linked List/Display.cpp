#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;


    void Create(){
        int B[]={3,5,7,9,11};
        Node *head=new Node;

        head->data=B[0];
        head->next=nullptr;

        Node *last;
        last=head;

        Node *temp;

        for(int i=1;i<(sizeof(B)/sizeof(B[0]));i++){
            temp=new Node;
            temp->data=B[i];
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
};
int main(){
    Node n;
    n.Create();
    return 0;
}