package com.mycompany.noor;
public class series4
// 1x+2x+3x+.....nx
{
    void series(int n,double x)
    {
        double sum=0.0;
        double term;
        for(int i=1; i<=n;i++)
        {
            term=x*i;
            sum=sum+term;
        }//end of for
        System.out.println(sum);
    }
    public static void main(String args[])
    {
        series4 obj=new series4();
        obj.series(2,3.0);
    }
}
