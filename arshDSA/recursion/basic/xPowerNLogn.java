public class xPowerNLogn {
    //stack height = log n
    public static int calcPow(int x, int n) {
        if(n==0) //base case 1
            return 1;
        if(x==0) //base case 2
            return 0;
        
        //n even
        if(n%2 ==0)
            return calcPow(x, n/2) * calcPow(x, n/2);

        //n odd
        else return calcPow(x, n/2) * calcPow(x, n/2) * x;
    }
    public static void main(String[] args) {
        int x=2, n=5;
        System.out.println(calcPow(x, n));
    }
}
