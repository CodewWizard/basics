import java.util.Arrays;

public class MergeArr {
    public static void main(String[] args) {
        int[] arr1 = {1, 4, 7, 8, 10};
        int[] arr2 = {2, 3, 9};
        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
        merge(arr1 ,arr2);
        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
     }

     public static void merge(int[] a1, int[] a2){
        int n = a1.length + a2.length, temp;
         for (int i = 0; i < a1.length; i++) {
             if(a1[i] > a2[i]){
                 temp = a1[i];
                 a1[i] = a2[i];
                 a2[i]  =temp;
             }
         }
     }
}
