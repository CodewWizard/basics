#include<stdio.h>

int pivot(int arr[], int size, int target){
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(mid < end && arr[mid] > arr[mid + 1]){
            return mid;
        } 
        if(mid > start && arr[mid] < arr[mid - 1]){
            return mid - 1;
        }
        if(arr[mid] <= arr[start]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
     return -1;
}

int BinarySearch(int arr[], int size, int start, int end, int target){
    int mid;
    while (start <= end)
    {
        mid =start + (end - start) / 2;
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
    int arr[] = {7, 8, 9, 1, 3, 4, 6}, size = (sizeof(arr) / sizeof(int)), target = 4;
    int piv = pivot(arr, size, target);
    if(piv == -1){
        return BinarySearch(arr, size, 0, size - 1, target);
    }

    if(arr[piv] == target){
        return printf("%d ",piv);
    }    

    if(arr[0] <= target){
        return  printf("%d ",BinarySearch(arr, size, 0, piv - 1, target));
    }

    if(arr[0] > target){
        return printf("%d ",BinarySearch(arr, size, piv + 1, size - 1, target));
    }
}