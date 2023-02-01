public class permutationsOfString {
    // abc=> abc acb
    //       bac bca
    //       cab cba
    // pehle a lya fir ode age baki arrange kr k likhe and same for b,c
          public static void printPerm(String s, String permutation) {
        if(s.length() == 0){
            System.out.println(permutation);
            return;
        }
        for(int i=0; i<s.length(); i++){
            char currChar = s.charAt(i);
            //substring  let's say for 'a' hun asi agge bc nal krna. so take bc in newStr
            String newStr = s.substring(0, i) + s.substring(i+1);
                            // (0, 0) + (1) => "" + "bc" => "bc"  hun ide nal krna
            printPerm(newStr, permutation + currChar);
        }        
    }
    public static void main(String[] args) {
        String s = "abc";
        printPerm(s, "");
    }
}
