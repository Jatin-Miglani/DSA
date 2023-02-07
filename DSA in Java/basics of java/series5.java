package com.mycompany.noor;
public class series5
// x^1+x^2+x^3.....x^n
{
 void series(int n,double x)
 {
     double sum=0.0;
     double term;
     for(int i=1;i<=n;i++)
     {
         term=Math.pow(x,i);
        sum=sum+term;
     }
     System.out.println(sum);
 }
 public static void main(String args[])
 {
     series5 obj=new series5();
     obj.series(2, 4.0);
 }
}
