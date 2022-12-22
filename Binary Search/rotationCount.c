#include<stdio.h>

int pivot(int arr[], int size){
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

 int rotateCount(int arr[], int size, int piv){
     int start = 0, end = size - 1, mid, temPiv, rCount = 1;
         temPiv = piv - 1;
     while (start <= piv)
     {
        //  mid = start + (end - start) / 2;
         if (temPiv == -1)
         {
             return rCount;
         }
         else{
             rCount++;
             temPiv--;
         }
     }
     
 }

int main(){
    int arr[] = {3, 4, 5, 7, 0, 1, 2}, size = (sizeof(arr) / sizeof(int));
    int piv = pivot(arr, size);
    int rotationCount = rotateCount(arr, size, piv);
    printf("%d", rotationCount);
}