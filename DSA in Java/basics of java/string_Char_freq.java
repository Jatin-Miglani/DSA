package com.mycompany.noor;
import java.util.Scanner;
public class string_Char_freq
{
   String str;
   int len;
   void input()
   {
       Scanner sc=new Scanner(System.in);
       System.out.println("enter word");
       str=sc.next();
       len=str.length();
   }
   void frequency()
   {
       int i,j;
       char ch = 0;
       for(i=65;i<=90;i++)
       {
           int c=0;
           for(j=0;j<len;j++)
           {
               ch=str.charAt(j);
               if(ch==(char)i)
                   c++;
           }//end of j loop
           if(c>0)
               System.out.println(ch+" has frequency "+c);
       }//end of i loop
   }
   void maxfreq()
   {
       int i,j,max=0;
       char ch=0,maxch=0;
        for(i=65;i<=90;i++)
       {
           int c=0;
           for(j=0;j<len;j++)
           {
               ch=str.charAt(j);
               if(ch==(char)i)
                   c++;
           }//end of j loop
           if(c>0)
           {
             System.out.println(ch+" has frequency "+c);
             if(c>max)
               {
                   max=c;
                   maxch=ch;
               }
           }
       }//end of i loop
      System.out.println(maxch+" character with largest freq"+max);
   }
   public static void main(String args[])
   {
       string_Char_freq ob=new string_Char_freq();
       ob.input();
       ob.frequency();
       ob.maxfreq();
   }
}