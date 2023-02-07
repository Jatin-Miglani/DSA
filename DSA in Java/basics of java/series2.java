package com.mycompany.noor;
import java.util.*;
public class series2 
// x/1+x^2/2!+x^3/3!.....x^n/n!
{
    void series()
    {
        Scanner sc=new Scanner(System.in);
        int n;
        double x,sum=0.0,term;
        System.out.println("enter x and n");
        x=sc.nextDouble();
        n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            term=Math.pow(x,i)/factorial(i);
            sum=sum+term;
        }
        System.out.println(sum);
    }//end of series function
    int factorial(int m)
    {
        int f=1;
        for(int i=1;i<=m;i++)
            f=f*i;
        return f;
    }//end of factorial method
    public static void main(String args[])
    {
        series2 obj=new series2();
        obj.series();
    }
}// end of class
