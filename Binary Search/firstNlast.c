#include<stdio.h>

int first(int arr[], int size){
    int start = 0, end = size - 1, target = 7, mid, ans;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if(target == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
    
}

int last(int arr[], int size, int start){
    int end = size - 1, target = 7, mid, ans;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if(target == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
    
}

int main(){
    int arr[] = {5, 7, 7, 7, 7, 8, 10}, size = (sizeof(arr) / sizeof(int));
    int f = first(arr, size);
    int l = last(arr, size, f);
    printf("%d ", f);
    printf("%d ", l);
}