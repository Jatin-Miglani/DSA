public class palindromicNumberPyramid {
    public static void main(String[] args) {
        /*
    1
   212
  32123
 4321234
543212345
         */
        int n=5;
        for(int i=1; i<=n; i++){
            //spaces
            for(int j=1; j<=n-i; j++)
            System.out.print(" ");

            //no's
            for(int j=i; j>=1; j--)
                System.out.print(j);
            
            for(int j=2; j<=i; j++)
            System.out.print(j);

            System.out.println();
        }
    }
    
}
