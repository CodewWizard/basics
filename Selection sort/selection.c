#include<stdio.h>

// int min(int a[], int in, int n){
//     int min = a[in], index = 0;
//     for (int i = in; i < n; i++)
//     {
//         if (a[i] < min) 
//         {
//             min = a[i];
//             index = i;
//         }
        
//     }
//     return index;
// }


// void selectionMinElem(int a[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         int minVar = min(a, i, n);
//         swap(a, i, minVar);
        // printf("%d \n", a[minVar]);
//     }
    
// }


int largest(int a[], int n){
    int max = a[0], index = 0;
    for (int i = 1; i <= n; i++)
    {
        if(a[i] > max){
            max = a[i];
            index = i;
        }
    }
    return index;
}


void swap(int a[],int max, int last){
    int temp =a[max];
    a[max] = a[last];
    a[last] = temp;
}


void show(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}


void selectionSort(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        // int last = n - i - 1;
        int large = largest(a, n - i - 1);
        swap(a, large, n - i - 1);
    }
}

int main(){
    int a[10];
    int n = 5;
    printf("Enter size of array \n");
    scanf("%d",&n);

    printf("Enter array elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    show(a, n);
    printf("\n");
    // selectionMinElem(a, n);
    selectionSort(a, n);
    show(a, n);
}