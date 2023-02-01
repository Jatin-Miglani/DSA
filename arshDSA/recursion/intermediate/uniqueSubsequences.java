import java.util.HashSet;
public class uniqueSubsequences {
    public static void subs(String s, int idx, String newString, HashSet<String> set ) {
        if(idx == s.length()) {
            if(set.contains(newString)){
                return;
            } else{
                System.out.println(newString);
                set.add(newString);
                return;
            }
        }
        char currChar = s.charAt(idx);
        //to be
        subs(s, idx+1, newString+currChar, set);
        
        //to not be
        subs(s, idx+1, newString, set);
    }
    public static void main(String[] args) {
        String s = "aaa";
        HashSet <String> set = new HashSet<>();
        subs(s, 0, "", set);

    }
}
