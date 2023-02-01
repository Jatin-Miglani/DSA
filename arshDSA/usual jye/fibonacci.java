import java.util.*;
public class fibonacci {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();

        System.out.println("First "+n+" terms of Fibonacci series:");
        int first=0, second=1, next;
        System.out.print(first+" "+second+" ");
        for(int i=3; i<=n; i++){
            next=first+second;
            System.out.print(next+" ");
            first=second;
            second=next;
        }
        sc.close();

    }
}
