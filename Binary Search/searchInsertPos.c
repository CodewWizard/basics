#include<stdio.h>

int getInsertPos(int arr[], int target, int size){
    int start = 0, end = size - 1, mid;
    while(start <= end){
             mid = (start + end) / 2;
            if(target == arr[mid]){
                return mid;
            }
            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return start;
}

int main(){
    int arr[] = {1, 3, 5, 6}, target = 6, size = (sizeof(arr) / sizeof(int));
    printf("%d ", getInsertPos(arr, target, size));
}