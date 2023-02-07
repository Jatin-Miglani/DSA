package com.mycompany.noor;
//x^1-x^2+x^3-x^4......x^n
public class series1 
{
void series(int n,double x)
{
    double term,sum=0.0;
    int s=1;
    for(double i=1;i<=x;i++)
    {
        term=Math.pow(n,i)*s;
        System.out.println(term);
        sum=sum+term;
        s=-s;
    }//end of for
    System.out.println(sum);
}
public static void main(String args[])
{
    series1 obj=new series1();
    obj.series(2,4.0);
}
}
