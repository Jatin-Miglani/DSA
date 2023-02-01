public class sumTillN{
    public static void printSum(int i, int sum, int n) {
        if(i==n){
            sum+=i;
            System.out.println(sum);
            return;
        }
        sum+=i;
        printSum(i+1, sum, n);
        //to check i
        System.out.println(i);
    }
    public static void main(String[] args) {
        int i=1;
        int n=5;
        int sum=0;
        printSum(i, sum, n);
        System.out.println("yo");
    }
}