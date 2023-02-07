package com.mycompany.noor;
import java.util.Scanner;
public class string_palindrome
{//palindrome of a word
    String str;
    int len;
    void input()
    {
       Scanner sc= new Scanner(System.in) ;
       System.out. println("enter a word");
       str=sc.next();
       len=str.length();   
    }
    void palindrome()
    {
        String reverse="";
        char ch;
        for(int i=len-1;i>=0;i--)
        {
        ch=str.charAt(i);
        reverse =reverse+ch;
        }//end of for
        System.out.println("reversed  "+reverse);
        if(reverse.equals(str))
         System.out.println(str+"  is a palindrome string");
        else
         System.out.println(str+"   is NOT a palindrome string");
        
    }
    public static void main(String args[]) 
    {
        string_palindrome obj = new string_palindrome();
        obj.input();
        obj.palindrome();
    }
}
