public class hollowButterfly {
    public static void main(String[] args) {
        /*
            *        *
            **      **
            * *    * *
            *  *  *  *
            *   **   *
            *   **   *
            *  *  *  *
            * *    * *
            **      **
            *        *
         */
        int n=5;
        for(int i=1; i<=n; i++){
            //left
            for(int j=1; j<=i; j++){
                if(j==1 || i==j)
                System.out.print("*");
                else
                System.out.print(" ");
            }

            //spaces
            for(int j=1; j<=(n-i)*2; j++)
            System.out.print(" ");

            //right
            for(int j=1; j<=i; j++){
                if(j==1 || i==j)
                System.out.print("*");
                else
                System.out.print(" ");
            }
            System.out.println();
        }

        for(int i=n; i>=1; i--){
            //left
            for(int j=1; j<=i; j++){
                if(j==1 || i==j)
                System.out.print("*");
                else
                System.out.print(" ");
            }

            //spaces
            for(int j=1; j<=(n-i)*2; j++)
            System.out.print(" ");

            //right
            for(int j=1; j<=i; j++){
                if(j==1 || i==j)
                System.out.print("*");
                else
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}
