#include <iostream>
using namespace std;
class Node{
    public:
    int row;
    int column;
    int data;
    Node *next;
    Node *head;
    Node *head2;

    void Create(){
        head=new Node;
        head->row=0;
        head->column=0;
        head->data=7;
        head->next=nullptr;
        Node *last=head;
        Node *temp;
        cout<<"Enter "<<endl;
        for(int i=1;i<5;i++){
            temp=new Node;
            cout<<"Enter row,column and data ";
            cin>>temp->row;
            cin>>temp->column;
            cin>>temp->data;
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }

        head2=new Node;
        head2->row=0;
        head2->column=0;
        head2->data=7;
        head2->next=nullptr;
        Node *last2=head2;
        Node *temp2;
        cout<<"Enter "<<endl;
        for(int i=1;i<5;i++){
            temp2=new Node;
            cout<<"Enter row,column and data ";
            cin>>temp2->row;
            cin>>temp2->column;
            cin>>temp2->data;
            temp2->next=nullptr;
            last2->next=temp2;
            last2=temp2;
        }
    }

    void Display(Node *z){
        while(z!=nullptr){
            cout<<z->row<<"|"<<z->column<<"|"<<z->data<<"->";
            z=z->next;
        }
        cout<<"/0"<<endl;
    }

    void DisplayMatrix(Node *z){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                int a=z->row;
                int b=z->column;
                if(i==a && j==b){
                    cout<<" "<<z->data<<" ";
                    z=z->next;
                }
                else{
                    cout<<" 0 ";
                }
            }
            cout<<endl;
        }
    }
};
int main(){
    Node n;
    n.Create();
    Node *q=n.head;
    cout<<"Matrix 1"<<endl;
    n.Display(q);
    n.DisplayMatrix(q);
    cout<<"Matrix 2"<<endl;
    q=n.head2;
    n.Display(q);
    n.DisplayMatrix(q);
    return 0;
}