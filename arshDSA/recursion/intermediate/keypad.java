public class keypad {
    public static String[] map = {".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"}; //keypad given
    public static void makeCombination(String s, int idx, String combination) {
        if(idx == s.length()){ //base case
            System.out.println(combination);
            return;
        }
        char currChar = s.charAt(idx); //ide nal 2, 3 milya
        String mapping = map[currChar - '0']; //minus is lyi bcz ascii ch convert horya and ide ch oda corresponding string milega array vicho
        for (int i = 0; i < mapping.length(); i++) {
            makeCombination(s, idx+1, combination + mapping.charAt(i));
        }
       
    }
    public static void main(String[] args) {
        String s = "23";
        makeCombination(s, 0, "");
        System.err.println(Integer.parseInt("3465")-665);
    }
}
