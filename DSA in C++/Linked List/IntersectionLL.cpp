#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head1;
    Node *Middle;
    Node *head2;
    int count1;
    int count2;

    void Create(){
        int A[]={8,9,10,11,12,13,14,15};
        int n1=sizeof(A)/sizeof(A[0]);
        head1=new Node;
        head1->data=A[0];
        head1->next=nullptr;
        Node *last1=head1;
        Node *temp1;
        for(int i=1;i<4;i++){
            temp1=new Node;
            temp1->data=A[i];
            temp1->next=nullptr;
            last1->next=temp1;
            last1=temp1;
        }
        Middle=temp1;
        for(int i=4;i<n1;i++){
            temp1=new Node;
            temp1->data=A[i];
            temp1->next=nullptr;
            last1->next=temp1;
            last1=temp1;
        }
        int B[]={7,6,5,4};
        int n2=sizeof(B)/sizeof(B[0]);
        head2=new Node;
        head2->data=B[0];
        head2->next=nullptr;
        Node *last2=head2;
        Node *temp2;
        for(int i=1;i<n2;i++){
            temp2=new Node;
            temp2->data=B[i];
            temp2->next=nullptr;
            last2->next=temp2;
            last2=temp2;
        }
        temp2->next=Middle;
        count1=n1;
        count2=n2;

    }
    void Display(){
        Node *p=head1;
        cout<<"First Linked List is ";
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
        Node *q=head2;
        int count=0;
        cout<<"Second Linked List is ";
        while(q!=nullptr){
            count++;
            cout<<q->data<<"->";
            q=q->next;
        }
        count2=count;
        cout<<"/0"<<endl;
    }
    void Intersection(){
        int *S1=new int[count1];
        int *S2=new int[count2];
        Node *p=head1;
        int i=0;
        while(p!=nullptr){
            S1[i]=p->data;
            p=p->next;
            i++;
        }
        cout<<"First Stack S1 is "<<endl;
        for(int i=0;i<count1;i++){
            cout<<S1[i]<<endl;
        }
        p=head2;
        i=0;
        while(p!=nullptr){
            S2[i]=p->data;
            p=p->next;
            i++;
        }
        cout<<"Second Stack S2 is "<<endl;
        for(int i=0;i<count2;i++){
            cout<<S2[i]<<endl;
        }
        cout<<"_________________________________________"<<endl;
        int a=S1[count1-1];
        int b=S2[count2-1];
        int t1=0;
        while(a==b){
            t1=a;
            count1--;
            count2--;
            a=S1[count1];
            b=S2[count2];
        }
        cout<<t1<<" is the intersection point."<<endl;
    }
};
int main(){
    Node n;
    n.Create();
    n.Display();
    n.Intersection();
    return 0;
}