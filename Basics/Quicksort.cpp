#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int top{};
    int n{};
    int Upper[0];
    int Lower[0];
    int loc{};
    int A[0];
    if(n>1){
        top=top+1;
        Lower[1]=1;
        Upper[1]=n;
        
    }
    while(top!=0){
        int Beg;
        Beg=Lower[top];
        int End;
        End=Upper[top];
        top=top-1;

        int left{};
        int right{};
        left=Beg;
        while(A[loc]<=A[right]&&loc!=right){
            right=right-1;

        }
        if(loc==right){
            return;
        }
        if(A[loc]<A[right]){
            swap(A[loc],A[right]);
            loc=right;
        }
        while(A[left]<=A[loc&&loc!=left]){
            left=left+1;

        }
        if(loc==left){
            return;
        }
        if(A[left]>A[loc]){
            swap(A[left],A[loc]);
            loc=left;}
        
        if (Beg<loc-1){
            top=top+1;
            Lower[top]=Beg;
            Upper[top]=loc-1;

        }
        if(loc+1<End){
            top=top+1;
            Lower[top]=loc+1;
            Upper[top]=loc+1;
        }

    }
}