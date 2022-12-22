#include<stdio.h>

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}

int main(){
    int arr[100] = {1, 2, 3, 4, 5}, size = 5;
    display(arr, 5);
}