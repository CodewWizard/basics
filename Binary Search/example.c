#include<stdio.h>

int ceiling(int arr[], int size, int target){
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start ) / 2;
        if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            return arr[mid];
        }
    }
    return arr[start];
}

int main(){
    int arr[] = {1, 2, 7, 10, 13, 14, 17, 49}, size = (sizeof(arr) / sizeof(int)), target = 48;
    int ans = ceiling(arr, size, target);
    printf("%d ", ans);
}