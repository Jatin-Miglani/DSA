public class countPathMaze {
    public static int countPaths(int i, int j, int n, int m) { //n,m=> max length   ; i,j=> present index
        //allowed: either down or right. nothing else

        // asi sare possible paths count krne
        if(i==n || j==m){
            return 0;
        }
        if(i==n-1 && j==m-1) {
            return 1;
        }
        //down
        int down = countPaths(i+1, j, n, m);
        //right
        int right = countPaths(i, j+1, n, m);

        return down+right;
        
    }
    public static void main(String[] args) {
        int n=3, m=3;
        int total = countPaths(0, 0, n, m);
        System.out.println(total);

    }
}
