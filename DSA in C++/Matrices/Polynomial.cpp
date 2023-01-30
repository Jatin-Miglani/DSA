#include <iostream>
#include <cmath>
using namespace std;
class Element{
    public:
    int coeff;
    int exp;
};
class Polynomial{
    int n;
    Element *t;
    public:
    Polynomial(int n){
        this->n=n;
        t=new Element[this->n];
    }
    ~Polynomial(){
        delete []t;
    }

    friend istream &operator>>(istream &is,Polynomial &p);
    friend ostream &operator<<(ostream &os,Polynomial &p);
};

istream &operator>>(istream &is,Polynomial &p){
    for(int i=0;i<p.n;i++){
        cout<<"Enter coeff for "<<i+1<<" ";
        cin>>p.t[i].coeff;
        cout<<"Enter power for "<<i+1<<" ";
        cin>>p.t[i].exp;
    }
    return is;
}

ostream &operator<<(ostream &os,Polynomial &p){
    int sum=0;
    int x;
    cout<<"Enter x value ";
    cin>>x;
    for(int i=0;i<p.n;i++){
        sum += (p.t[i].coeff)*(pow(x,p.t[i].exp));
    }
    cout<<sum<<endl;
    return os;
}

int main(){
    Polynomial p1(5);
    cin>>p1;
    cout<<p1;
    return 0;
}