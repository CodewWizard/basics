#include<stdio.h>

int ans(int arr[], int target){
    int start = 0, end = 1, newStart;
    while (target > arr[end])
    {
        newStart = end + 1;
        end = end + (end - start + 1) * 2;
        start = newStart;
    }
    int res = binarySearch(arr, target, start, end);
    return res;
}

int binarySearch(int arr[], int target, int start, int end){
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
    
}

int main(){
    int arr[] = {2, 3, 4, 5, 8, 9, 10, 13, 15, 20, 23, 55, 78, 90, 99, 100}, target = 15;
    printf("%d ", ans(arr, target));
}