import java.util.*;
public class noOf1InBinary {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter no.");
        int n=sc.nextInt();
        int one=0, zero=0; //to count 1's and 0's
        int orig=n;
        int i=0;
        while(orig>0){
            int bitMask=1<<i;
            i++;
            orig/=2;
            int ans=n&bitMask;
            if(ans==0)
                zero++;
            else
                one++;
        }
        System.out.println(one+" 1's");
        System.out.println(zero+" 0's");
        sc.close();
    }
}
