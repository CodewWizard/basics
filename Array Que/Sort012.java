import java.util.ArrayList;
import java.util.Arrays;

public class Sort012 {
    public static void main(String[] args) {
        int[] arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 1};
        System.out.println(Arrays.toString(arr));
        int mid = 0;
        int low = 0;
        int temp;
        int high = arr.length - 1;
        while (mid <= high) {
            switch (arr[mid]){
                case 0:
                    temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                    low++;
                    mid++;
                    break;

                case 1:
                    mid++;
                    break;

                case 2:
                    temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                    high--;
                    break;
            }
        }
        System.out.println(Arrays.toString(arr));
    }
}
