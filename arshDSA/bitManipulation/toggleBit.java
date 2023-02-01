import java.util.*;
public class toggleBit {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        //convert to binary
        String s="";
        while(n>0) {
            int remainder=n%2;
            s=remainder+s;
            n/=2;
        }
        //print before toggle
        System.out.println(s);
        //toggle each bit
        String p="";
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i)=='1'){
                p=p+'0';
            }
            else{
                p=p+'1';
            }
            
        }
        //print binary no. (p)
        System.out.println(p);
        //binary to decimal for p
        int ans=0;
        for(int i=p.length()-1; i>=0; i--) {
            int rem=(int)p.charAt(i)-48;
            ans=ans+(int)Math.pow(2, p.length()-i-1)*rem;
        }
        System.out.println(ans);
        sc.close();
    }
}
