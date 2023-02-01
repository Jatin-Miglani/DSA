import java.util.*;
class ajeebJyaSum{
    // (a+2^0.b), (a+2^0.b + 2^1.b), (a+2^0.b + 2^1.b + 2^2.b), ... (a+2^0.b + 2^1.b + 2^2.b + ... 2^(n-1).b) 
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt(); // t hega ki total eho ji kini series chahidi
        for(int x=0;x<t;x++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            for(int i=0; i<n; i++){
                int sum=a;
                for(int j=0; j<=i; j++){
                    sum += b*(int)(Math.pow(2, j));
                }
                System.out.print(sum + " ");
                
            }
            System.out.println();
        }
        in.close();
    }
}