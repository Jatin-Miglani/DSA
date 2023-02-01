#include <iostream>
#include <cmath>
using namespace std;
class Node{
    public:
    int coeff;
    int power;
    Node *next;
    Node *head;

    void Create(){
        head=new Node;
        head->coeff=4;
        head->power=8;
        head->next=nullptr;
        Node *last=head;
        Node *temp;
        int n;
        cout<<"Enter number of elements to enter ";
        cin>>n;
        for(int i=0;i<n;i++){
            temp=new Node;
            cout<<"Enter coefficent ,power";
            cin>>temp->coeff;
            cin>>temp->power;
            temp->next=nullptr;
            last->next=temp;
            last=temp;
        }
    }
    void Display(){
        Node *p=head;
        while(p!=nullptr){
            cout<<p->coeff<<"|"<<p->power<<"|"<<"->";
            p=p->next;
        }
        cout<<"/0"<<endl;
        p=head;
        while(p!=nullptr){
            cout<<p->coeff<<"x^"<<p->power<<"+";
            p=p->next;
        }
        cout<<endl;
    }
    void Polynomial(){
        int x;
        cout<<"Enter x "<<endl;
        cin>>x;
        Node *p=head;
        int sum=0;
        while(p!=nullptr){
            sum=sum + (p->coeff)*(pow(x,p->power));
            cout<<sum<<endl;
            p=p->next;
        }
        cout<<"Sum of given Polynomial is"<<sum<<endl;
    }
};
int main(){
    Node n;
    n.Create();
    n.Display();
    n.Polynomial();
    return 0;
}