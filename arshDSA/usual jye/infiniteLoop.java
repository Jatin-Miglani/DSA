public class infiniteLoop {
    public static boolean isPrime(short a) {
        boolean flag=true;
        for(int i=2; i<=a/2; i++){
            if(a%i == 0){
                flag=false;
                break;
            }
        }
        return flag;
        
    }
    public static void main(String[] args) {
        short i=1;
        while(true){
            if(isPrime(i))
            System.out.println(i);
            i++;
        }
    }
}
