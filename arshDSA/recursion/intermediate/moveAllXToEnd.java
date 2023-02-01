public class moveAllXToEnd {
    public static void moveAllX(String s, int idx, int count, String newString) {
        if(idx == s.length()){ //base case
            for(int i=0; i<count; i++){
                newString += 'x';
            }
            System.out.println(newString);
            return;
        }
        char currChar = s.charAt(idx);
        if(currChar == 'x'){
            count++;
        } else{
            newString += currChar;
        }
        moveAllX(s, idx+1, count, newString);
    }
    public static void main(String[] args) {
        String s = "axbcxxd";
        moveAllX(s, 0, 0, "");
    }
}
