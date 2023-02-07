package com.mycompany.noor;
public class series6 
 // x+(x^2)/2+(x^3)/3....(x^n)/n        
{       
    void series(int n, double x)
    {
        double sum=0.0;
        double term;
        for(int i=1;i<=n;i++)
        {
            term=Math.pow(x,i)/i;
            sum=sum+term;
        }
        System.out.println(sum);
    }
    public static void main(String args[])
    {
        series6 obj=new series6();
        obj.series(2, 3.0);
    }
}
