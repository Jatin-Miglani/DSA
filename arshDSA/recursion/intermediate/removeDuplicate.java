public class removeDuplicate {
    //map array for alphabets
    public static boolean arr[] = new boolean[25]; //bcz 0-25 => 26 alphabets, and default value is false

    public static void duplicate(String s, int idx, String newString) {
        if(idx == s.length()) {
            System.out.println(newString);
            return;
        }

        char currChar = s.charAt(idx);
        // 'a' - 'a' = 0
        // 'b' - 'a' = 1
        // 'c' - 'a' = 2

        // 'z' - 'a' = 25
        // these are no's ie indices of the arrays so compare
        if(arr[currChar - 'a'] ) { //means true, ie already added. so just call the func
            duplicate(s, idx+1, newString);
        } else { //means false, ie not added. so add to newString, make array index true and call the func
            newString += currChar;
            arr[currChar - 'a'] = true;
            duplicate(s, idx+1, newString);
        }
        
    }
    public static void main(String[] args) {
        String s = "aabacbbdc";
        duplicate(s, 0, "");
        
    }
}