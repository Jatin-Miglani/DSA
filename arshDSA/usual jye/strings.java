public class strings {
   public static void main(String args[]) {
     StringBuilder sb = new StringBuilder("Hello World");
    
     for(int i=0; i<sb.length()/2; i++) {
       int front = i;
       int back = sb.length() - i - 1;
 
       char frontChar = sb.charAt(front);
       char backChar = sb.charAt(back);
 
       sb.setCharAt(front, backChar);
       sb.setCharAt(back, frontChar);
     }
     
     String st="hello";
     String re=st.replace('e', 'i');
     System.out.println(re);
     re=st.replaceFirst("l", "t");
     System.out.println(re);


     System.out.println(sb);
     int i=5;
    //  System.out.println(i++);
    //  System.out.println(++i);
     int j=6;
     int s=i&j;
     System.out.println(s);
     System.out.println(~i);
     
   }
}
