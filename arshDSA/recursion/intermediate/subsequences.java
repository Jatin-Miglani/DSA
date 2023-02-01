public class subsequences {
    public static void subse(String s, int idx, String newString) {
        // Time complexity => O(2^n)
      
        if(idx == s.length()) {   // base case
            System.out.println(newString);
            return;
        }

        char currChar = s.charAt(idx);
      
        //choose to add
        subse(s, idx+1, newString+currChar);

        //choose not to add
        subse(s, idx+1, newString);
        
    }
    public static void main(String[] args) {
        String s = "abc";
        subse(s, 0, "");

    }
}
