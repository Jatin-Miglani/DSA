public class xPowerN {
    //stack height n
    public static int calcPower(int x, int n) {
        if(x==0){ //base case 1
            return 0;
        }
        if(n==0){ //base case 2
            return 1;
        }
        int xPownm1=calcPower(x, n-1);
        int xPown=x*xPownm1; //kaam
        return xPown;
        
    }
    public static void main(String[] args) {
        int x=2, n=3;
        int ans=calcPower(x, n);
        System.out.println(ans);

    }
}