#include<stdio.h>

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deletion(int arr[], int size, int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}


int main(){
    int arr[100] = {1, 2, 3, 4, 5}, index = 2, size = 5;
    display(arr, size);
    deletion(arr, size, index);
    size--;
    display(arr, size);
}