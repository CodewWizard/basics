#include<stdio.h>

int flooring(int arr[], int size){
    int end = size - 1, mid, start = 0, target = 17;
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
            printf("%d \n", arr[mid]);
            return mid;
        }
    }
    printf("element: %d ", arr[end]);
    return end;
     
}
int main(){
    int arr[] = {2, 3, 5, 9, 14, 16, 18}, size = (sizeof (arr) / sizeof(int));
    int ans = flooring(arr, size);
    printf("index: %d ", ans);
}