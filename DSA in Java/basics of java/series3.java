package com.mycompany.noor;
public class series3 
// 1+2+3+......n = n(n+1)/2
{
    void series(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
            sum=sum+i;
        System.out.println("sum="+sum);
    }
    public static void main(String args[])
    {
        series3 obj=new series3();
        obj.series(10);
    }
}
