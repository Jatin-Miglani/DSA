public class firstLastOccurence {
    // static is lyi bcz agr func ch bhejya te var var change hoygi value => bad thing
    // values -1 is lyi taa ki value change ho paye properly. 
    public static int first = -1; 
    public static int last = -1;

    public static void findOcc(String s, int idx, char element) {
        if(idx == s.length()) { //base or last case
            System.out.println(first);
            System.out.println(last);
            return;
        }
        if(element == s.charAt(idx)) {
            if(first == -1){ //pehle check kita agar first -1 hai te onu value do
                first = idx;
            } else{
                last = idx;
            }
        }
        findOcc(s, idx+1, element);
        
    }
    public static void main(String[] args) {
        String s = "abcaaajtbeadk";
        findOcc(s, 0, 'a');
    }
}
