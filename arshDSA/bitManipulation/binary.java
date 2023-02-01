import java.util.*;
public class binary {
    public static void decimalToBinary(int a){
        String s="";
        int orig=a;
        //add remainders from 2 to string (in reverse)
        while(a>0){
            int remainder=a%2;
            a/=2;
            s=remainder+s;
        }
        System.out.println("Binary of "+orig+" is: "+s);
        return;
    }
    public static void binaryToDecimal(String a) {
        int ans=0;
        //sidi loop lai. har step ch te string da char chukya. ascii of 0=48, so subtracted 48 
        //then did 2^i * r
        for(int i=0; i<a.length(); i++){
            int r=(int)a.charAt(a.length()-i-1)-48;
            ans=ans+((int)Math.pow(2,i)*r);
        }
        System.out.println("Decimal of "+a+" is: "+ans);
        return;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter decimal no.");
        int i=sc.nextInt();
        System.out.println("enter binary no.");
        String j=sc.next();
        decimalToBinary(i);
        binaryToDecimal(j);
        sc.close();
    }
}
