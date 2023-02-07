package com.mycompany.noor;
import java.util.*;
public class A 
{
    int n;
    void input() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a no.");
        n = sc.nextInt();
    }
    void print()
    {
        int sum;
        for(int i=1;i<n;i++)
        {
            sum=0;
            for(int j=i;j<=n;j++)
            {
                sum=sum+j;
                if(sum==n)
                {                   //printing
                  for(int t=i;t<=j;t++)
                  {
                      System.out.print(t+" ");
                  }
                  System.out.println();
                }
            }//end of j loop
        }//end of i loop
    }
    public static void main(String args[])
    {
        A obj=new A();
        obj.input();
        obj.print();
    }}// end of class