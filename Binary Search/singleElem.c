#include<stdio.h>

// int getElement(int arr[], int size){
//     int start = 0, end = size - 2, mid;
//     while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if(mid % 2 == 0){
//             if(arr[mid] == arr[mid + 1]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//         else{
//             if(arr[mid] == arr[mid - 1]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//     }
//     return arr[start];
// }

// int main(){
//     int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7}, size = (sizeof(arr) / sizeof(int));
//     printf("%d ", getElement(arr, size));
// }


// Optimized solution - use XOR 

int getElement(int arr[], int size){
    int start = 0, end = size - 2, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if(arr[mid] == arr[mid ^ 1]){
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }   
    }
    return arr[start];
}


int main(){
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7}, size = (sizeof(arr) / sizeof(int));
    printf("%d ", getElement(arr, size));
}