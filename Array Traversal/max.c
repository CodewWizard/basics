#include<stdio.h>

int main(){
    int arr[] = {1, 3, 8, 20, 2, 4}, size = (sizeof(arr) / sizeof(int)), i, max = arr[0];
    printf("%d ", size);
    for (i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d ", max);
}