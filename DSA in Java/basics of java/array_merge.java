package com.mycompany.noor;
import java.util.Scanner;
public class array_merge
{
    int A[],B[],C[],i,j;
    void merge()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter values for limits of A & B");
        int a=sc.nextInt();
        int b=sc.nextInt();
        A=new int[a];
        B=new int[b];
        C=new int[a+b];
        System.out.println("enter "+a+" values");
         for(i=0;i<a;i++)
             A[i]=sc.nextInt();
        System.out.println("enter "+b+" values for B array");
         for(i=0;i<b;i++)
              B[i]=sc.nextInt();
        //merging
         for(i=0;i<a;i++)
            C[j++]=A[i];
         for(i=0;i<b;i++)
            C[j++]=B[i];
    }
    void print()
    {
        for(i=0;i<C.length;i++)
            System.out.println(C[i]+" ");
    }
    public static void main(String args[])
    {
        array_merge obj=new array_merge();
        obj.merge();
        obj.print();
    }
}
