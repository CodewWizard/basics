#include <stdio.h>

void display(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void bubble(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j + 1]){
                swap(a, j, j + 1);
            }
        }   
    }    
}

int main()
{
    int a[10];
    int i;
    int n = (sizeof(a) / (sizeof(int)));
    printf("Enter size of array \n");
    scanf("%d",&n);

    printf("Enter Array elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Array before sorting \n");
    display(a, n);
    printf("\n");
    bubble(a, n);
    printf("Array after sorting \n");
    display(a, n);
}