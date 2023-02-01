public class increasingArray {
    public static boolean isSorted(int arr[], int idx) {

        if(idx == arr.length-1){ // len-1 is lyi so as to avoid out of bound condition. nhi te niche if statement ch arr[len] ajega => out of bounds
            return true;
        }

        if(arr[idx] >= arr[idx+1]){
            return false;
        }

        return isSorted(arr, idx+1);
    }
    public static void main(String[] args) {
        int arr[] = {1, 4, 7, 7};
        System.out.println(isSorted(arr, 0));
    }
}
