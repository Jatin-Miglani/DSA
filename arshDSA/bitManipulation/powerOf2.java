import java.util.*;
public class powerOf2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = "";
        while(n>0) {
            int remainder=n%2;
            n/=2;
            s=remainder+s;
        }
        System.out.println(s);

        int one=0;
        //there should be only 1 in binary if it is to be a power of 2(that too in start)
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i)=='1')
            one++;
        }
        if (one==1) {
            System.out.println("yes it is power of 2");
        }
        else {
            System.out.println("not power of 2");
        }
        sc.close();
    }
}
