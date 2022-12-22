#include<stdio.h>

int findPivot(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i] > arr[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5, 6, 7, 0, 1, 2, 3};
    int size = 8;
    int res = findPivot(arr, size);
    printf("%d", res);
}