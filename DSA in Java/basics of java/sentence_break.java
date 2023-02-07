package com.mycompany.noor;
import java.util.*;
public class sentence_break 
{
    String str;
    String sent;
    int len; 
    sentence_break()
    {
        str="";
        len=0;
    }
    void ascending()
    {
        String arr[]=new String[10];
        int arrlen[]=new int[10];
        int k=0;
        Scanner sc=new Scanner(System.in);
        String word,temp;
        int t;
        while(sc.hasNext())
        {
            word=sc.next();
            int x=word.length();
            arr[k]=word;
            arrlen[k]=x;
            k++;
        }// end of while
        //bubble sort
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<(k-1);j++)
            {
                if(arrlen[j]>arrlen[j+1])
                {
                    t=arrlen[j];
                    arrlen[j]=arrlen[j+1];
                    arrlen[j+1]=t;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }//end of if 
              if(arrlen[j]==arrlen[j+1])
              {
                  if(arr[j].compareTo(arr[j+1])>0)
                  {
                      temp=arr[j];
                      arr[j]=arr[j+1];
                      arr[j+1]=temp;
                  }
              }
            }
        }
        //printing
        for(int i=0;i<k;i++)
        {
            System.out.print(arr[i]+" ");
            sent=sent+" "+arr[i];
        }
        System.out.println(sent);
    }
    public static void main(String args[])
    {
        sentence_break ob=new sentence_break();
        ob.ascending();
    }
}