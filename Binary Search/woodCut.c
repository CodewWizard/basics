#include<stdio.h>
#include<stdlib.h>

int woodCut(int arr[], int mid, int size, int m){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > mid){
              ans += arr[i] - mid;
        }
    }
    if(ans >= m){
        return 1;
    }
    else {
        return 0;
    }
}

int max(int arr[], int size){
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {20, 15, 10, 17}, m = 7, size = (sizeof(arr) / sizeof(int));
    int start = 0, end = max(arr, size), mid, ans;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if(woodCut(arr, mid, size, m)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    printf("%d ",ans);
}