#include<stdio.h>

int getEvenDigits(int arr[], int size){
    int digitCount = 0, evenCount = 0, temp;
    for (int i = 0; i < size; i++)
    {
        while (arr[i] > 0)
        {
            arr[i] /=  10;
            digitCount++;
        }
        if(digitCount % 2 == 0){
            evenCount++;
        }
        
    }
    return evenCount;
}

int main(){
    int arr[] = {12, 486, 9889, 2, 18}, size = (sizeof(arr) / sizeof(int));
    printf("%d ", getEvenDigits(arr, size));
}