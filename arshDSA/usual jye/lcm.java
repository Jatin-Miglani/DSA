import java.util.*;
public class lcm {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        
        int lcm=a*b;
        for(int i=lcm; i>=1; i--){
            if(i%a==0 && i%b==0)
            lcm=i;
        }

        System.out.println("lcm is: "+lcm);
        sc.close();

    }   
}
