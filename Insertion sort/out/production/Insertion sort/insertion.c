#include<stdio.h>

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void insertionSort(int a[], int n){
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a, j, j - 1);
            }
        }   
    }
}

void display(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int main(){
    int a[10], n;
    printf("Enter Size of array \n");
    scanf("%d", &n);

    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    display(a, n);
    insertionSort(a, n);
    printf("\n");
    display(a, n);
}