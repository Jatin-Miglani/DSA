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

    Polynomial operator+(Polynomial &p);

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
    int x=1;
    int sum=0;
    for (int i=0;i<p.n;i++){
        sum+=(p.t[i].coeff)*(pow(x,p.t[i].exp));
    }
    cout<<"Sum "<<sum<<endl;
    return os;
}

Polynomial Polynomial::operator+(Polynomial &p){
    Polynomial *sum;
    int n1=n+p.n;
    sum=new Polynomial(n1);

    int i,j,k;
    while(i<n && j<p.n){
        if(t[i].exp==p.t[j].exp){
            sum->t[k].exp=t[i].exp;
            sum->t[k].coeff=t[i].coeff+p.t[i].coeff;
            k++;
            i++;
            j++;
        }
        if(t[i].exp<p.t[j].exp){
            sum->t[k]=p.t[j];
            k++;
            j++;
        }
        if(t[i].exp>p.t[j].exp){
            sum->t[k]=p.t[i];
            k++;
            i++;
        }
    }
    // for(;i<n;i++){
    //     sum->t[k++]=t[i];
    // }
    // for(;j<p.n;j++){
    //     sum->t[k++]=p.t[j];
    // }
    // sum->n=k;

    return *sum;
}

int main(){
    Polynomial p1(3);
    Polynomial p2(5);
    cin>>p1;
    cin>>p2;

    Polynomial sum=p1+p2;

    cout<<p1;
    cout<<p2;
    cout<<sum;

    return 0;
}