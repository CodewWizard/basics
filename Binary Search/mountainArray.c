// find index of target in mountain array

#include <stdio.h>
#include<stdbool.h>

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
    return start;
}

int orderAgnosticBS(int arr[], int size,int start, int end, bool isAscending)
{
    int mid;
    int target = 90;
     isAscending = arr[start] < arr[end];
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (isAscending)
        {
            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else
        {
            if (target > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 4, 3, 0}, size = (sizeof(arr) / sizeof(int));
    int peak = peakInMountain(arr, size);
    printf("Index of Peak %d",peak);
    int firstTry = orderAgnosticBS(arr, size, 0, peak, true);
    if(firstTry != -1){
        return printf("\nIndex of target is %d ",firstTry);
    }
    return printf("\nIndex of target is %d i.e. target not found!",orderAgnosticBS(arr, size, peak+1, size-1, false));
}