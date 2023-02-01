public class towerOfHanoi {
    public static void tower(int n, String source, String helper, String dest) {
        if(n==1){ //base case
            System.out.println(n + " shifted from " + source + " to " + dest);
            return;
        }
        tower(n-1, source, dest, helper);
        System.out.println(n + " shifted from " + source + " to " + helper);
        tower(n-1, helper, source, dest); // now H is source, and S is helper
        
    }
    public static void main(String[] args) {
        int n=4;
        tower(n, "S", "H", "D");
    }
}
