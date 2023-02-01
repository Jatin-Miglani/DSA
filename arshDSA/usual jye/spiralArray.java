import java.util.*;
public class spiralArray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter row no. and column no.");
        int row=sc.nextInt();
        int colm=sc.nextInt();
        System.out.println("enter elements: ");
        int [][] num=new int[row][colm];

        for(int i=0; i<row; i++) {
            for(int j=0; j<colm; j++) {
                num[i][j]=sc.nextInt();
            }
        }
        
        for(int i=0; i<row; i++) {
            for(int j=0; j<colm; j++) {
                System.out.print(num[i][j]+" ");
            }
            System.out.println();
        }

        int rowStart=0, rowEnd=row-1, colmStart=0, colmEnd=colm-1;

        while (rowStart<=rowEnd && colmStart<=colmEnd) {
            //colmStart to colmEnd in row rowStart
            for(int i=colmStart; i<=colmEnd; i++)
            System.out.print(num[rowStart][i]+" ");
            rowStart++;

            //rowStart to rowEnd in colm colmEnd
            for(int i=rowStart; i<=rowEnd; i++)
            System.out.print(num[i][colmEnd]+" ");
            colmEnd--;

            //colmEnd to colmStart in row rowEnd
            for(int i=colmEnd; i>=colmStart; i--)
            System.out.print(num[rowEnd][i]+" ");
            rowEnd--;
            
            //rowEnd to rowStart in colm colmStart
            for(int i=rowEnd; i>=rowStart; i--)
            System.out.print(num[i][colmStart]+" ");
            colmStart++;
        }

        sc.close();


    }
}
