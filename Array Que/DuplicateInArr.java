public class DuplicateInArr {
    public static void main(String[] args) {
        int arr[] = {2, 4, 1, 3, 2};
        int ans = getDuplicate(arr);
        System.out.println(ans);
    }

    public static int getDuplicate(int[] arr){
        int slow = arr[0];
        int fast = arr[0];
        do{
            slow = arr[slow]; //temp = 2, slow = 9
            fast = arr[arr[fast]]; // fast = 1
        }while(slow != fast);

        fast = arr[0];
        while (slow != fast) {
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }
}
