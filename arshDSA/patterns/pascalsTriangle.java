public class pascalsTriangle {
    public static void main(String[] args) {
        /*
    1 
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

    c=c*(i-j)/j;    main code

         */
        int n=5;
        for(int i=1; i<=n; i++){
            //spaces
            for(int j=1; j<=n-i; j++)
            System.out.print(" ");

            //no's
            int c=1;
            for(int j=1; j<=i; j++){
                System.out.print(c+" ");
                c=c*(i-j)/j;
            }

            System.out.println();
        }
    }
}
