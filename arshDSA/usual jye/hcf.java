import java.util.*;
public class hcf {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        
        int min;
        if(a>b)
        min=b;
        else
        min=a;
        
        int hcf=1;
        for(int i=1; i<=min; i++){
            if(a%i==0 && b%i==0)
            hcf=i;
        }

        System.out.println("hcf is: "+hcf);
        sc.close();

    }   
}
