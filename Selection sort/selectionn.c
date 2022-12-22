#include<stdio.h>
#include<stdlib.h>

void display(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");   
}

void swap(int arr[], int a, int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int min(int arr[], int i, int n){
    int minn = __INT_MAX__, index = 0;

    for (int j = i; j < n; j++)
    {
        if(minn > arr[j]){   // 7 > 7
            minn = arr[j];
            index = j;
        }
    }
    return index;
}

void selectionSort(int arr[], int n){
    int mini, temp;
    for (int i = 0; i < n; i++)
    {
        // printf("i :%d\n", i);
        mini = min(arr, i, n);
        printf("mini : %d\n",mini);
        swap(arr, mini, i);
    }
    
}

int main(){
    int a[5] = {4, 7, 1, 3, 9};
    int n = 5;
    display(a, n);
    selectionSort(a, n);
    display(a, n);
}