public class insertionSort {
    public static void main(String[] args) {
        int arr[] = {7, 8, 3, 1, 2};
        //time complexity = O(n^2)

        //unsorted part loop
        for(int i=1; i<arr.length; i++){
            int current = arr[i];
            int j=i-1;

            while(j>=0 && current<arr[j]){
                arr[j+1]=arr[j]; //j is i-1, so j+1 is allowed. for first loop, it is actually i. te elements ek ek agge shift hore aa.
                j--;
            }

            //placement
            arr[j+1]=current; //end ch j actual position to khat gya, is lyi j+1.
        }

        printArr(arr);
    }
    public static void printArr(int arr[]) {
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}