#include<stdio.h>

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");   
}

void swap(int a[], int n){
    int temp;
    for (int i = 0; i < n; i = i + 2)
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    print(a, n);
    swap(a, n);
    print(a, n);
}