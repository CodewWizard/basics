#include<stdio.h>

int main(){
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos = 5, x = 50, n = 10;

     for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    n++;
    for (int i = n ; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos - 1] = x;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
