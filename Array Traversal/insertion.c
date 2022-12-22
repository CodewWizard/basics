#include<stdio.h>

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insertion(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
    
}

int main(){
    int arr [100] = {1, 2, 3, 5, 6}, size = 5, element = 4, index = 3, capacity = 100;
    display(arr, size);
    insertion(arr, size, element, capacity, index);
    size+=1;
    display(arr, size);   
}