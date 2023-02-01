public class reverseString {
    public static void reverse(int index, String s) {
        if(index == 0){
        System.out.print(s.charAt(index));
            return;
        }
        System.out.print(s.charAt(index));
        reverse(index-1, s);

        
    }
    public static void main(String[] args) {
        String s = "hello";
        reverse(s.length()-1, s);
    }
}
