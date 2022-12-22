#include<stdio.h>

int getMax(int arr[], int size){
        int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getSum(int arr[], int size){
        int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int getMinimumPages(int arr[], int size, int start, int end, int mid, int m){
    int student = 1;
    int pages = 0;
    for (int i = 0; i < size; i++)
    {
        if((pages + arr[i]) > mid){
            student++;
            pages = arr[i];
        }
        else{
              pages = pages + arr[i];
        }
    }
    return (student <= m);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5}, m = 2, size = (sizeof(arr) / sizeof(int)), ans;
    int start = getMax(arr, size);
    int end = getSum(arr, size);
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if(getMinimumPages(arr, size, start, end, mid, m)){
            ans = mid;
            end  = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    printf("%d ", ans);
}   
