public class fib {
    //using state variable
    public static void printFibonacci(int first, int second, int state, int n) {
        if(state==n){ 
        return;
        }
        state++;
        int third=first+second;
        System.out.print(third+" ");
        first=second;
        second=third;
        printFibonacci(first, second, state, n);
    }
     //without using state variable
     public static void printFib(int first, int second, int n) {
        if(n==0){
        return;
        }
        int third=first+second;
        System.out.print(third+" ");
        printFib(second, third, n-1);
    }
    public static void main(String[] args) {
        int n=10;
        //using state variable
        System.out.print("0 1 ");
        printFibonacci(0, 1, 2, n); //hun duji state hegi aa. othe jande hi state 3 hojani
        System.out.println();
        
        //without using state variable
        System.out.print("0 1 ");
        printFib(0, 1, n-2);
        
    }
}
