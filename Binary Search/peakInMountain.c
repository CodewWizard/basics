#include<stdio.h>

int peakInMountain(int arr[], int size){
    int start = 0, end = size - 1, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid] > arr[mid + 1]){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }
    return arr[start];
    
}

int main(){
    int arr[] = {0, 1, 1, 2, 3, 4, 0, -1}, size = (sizeof(arr) / sizeof(int));
    printf("%d ", peakInMountain(arr, size));
}