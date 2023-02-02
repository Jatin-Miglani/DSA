#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *head;
    int count;
    int *A;

    void Create(int A[],int n){
        head=new Node;
        head->data=A[0];
        head->next=NULL;
        Node *last=head;
        Node *temp;
        for(int i=1;i<n;i++){
            temp=new Node;
            temp->data=A[i];
            temp->next=NULL;
            last->next=temp;
            last=temp;
        }
    }

    void Display(){
        Node *p=head;
        int count1=0;
        while(p!=NULL){
            count1++;
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
        count=count1;
    }

    void ConvertArray(){
        A=new int[count];
        Node *p=head;
        for(int i=0;i<count;i++){
            A[i]=p->data;
            p=p->next;
        }

        for(int i=0;i<count;i++){
            for(int j=0;j<count-1;j++){
                if(A[j]>A[j+1]){
                    int temp=0;
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }

        cout<<"|";
        for(int i=0;i<count;i++){
            cout<<A[i]<<" ";
        }
        cout<<"|"<<endl;

        p=head;
        for(int i=0;i<count;i++){
            p->data=A[i];
            p=p->next;
        }
        
        delete []A;
    }

    void RemoveDuplicates(){
        Node *p=NULL;
        Node *q=head;
        do
        {
            p=q;
            q=q->next;
            if(p->data==q->data){
                p->next=q->next;
                return;
            }
        } while (q!=NULL);
        
    }
};
int main(){
    int A[]={9,6,10,15,6,1};
    int n1=sizeof(A)/sizeof(A[0]);

    Node n;
    n.Create(A,n1);
    n.Display();
    n.ConvertArray();
    n.Display();
    n.RemoveDuplicates();
    n.Display();
    return 0;
}
