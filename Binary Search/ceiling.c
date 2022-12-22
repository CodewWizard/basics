#include<stdio.h>
// int ceiling(int arr[], int size){
//     int mid, start = 0, end = size - 1, target = 18;
//      if(target > arr[size - 1]){
//             return -1;
//         }
//      while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if(arr[mid] > target){
//             end = mid - 1;
//         }
//         else if(arr[mid] < target){
//             start = mid + 1;
//         }
//         else{
//             return mid;
//         }
//     }
//     printf("%d ", arr[start]);
//     return start;
// }

// int main(){
//     int arr[] = {2, 3, 5, 9, 14, 16, 18}, size = (sizeof(arr)/ sizeof(int));
//     int ans = ceiling(arr, size);
//     printf("%d", ans);
// }





int binary(char arr[], int n, int target){
    int beg = 0, end = n - 1, mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            beg = mid + 1;
        }
    }
    return beg; //for ceiling
    // return end;  for floor
}

int main(){
    char arr[5] = {'a', 'c', 'e'};
    int n = 3;
    char target = 'b';
    printf("%d",binary(arr, n, target));
}