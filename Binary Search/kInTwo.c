#include<stdio.h>

// void mergedArr(int arr1[], int arr2[], int m, int n){
//     int  arr3[10] = {}, j = 0;
//     for (int i = 0; i < m; i++)
//     {
//         arr3[i] = arr1[i];
//     }
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ", arr3[i]);
    // }
    
//     for (int i = m; i < (m + n); i++)
//     {
//         arr3[i] = arr2[j];
//         j++;
//     }
//     for (int i = 0; i < (m + n); i++)
//     {
//         printf("%d ", arr3[i]);
//     }
//     int x = m + n;
//     sort(arr3, x);
// }

int sort(int arr3[], int x, int k){
    int temp;
    printf("\nsorting");
    for (int i = 0; i < x; i++)
    {
        for (int j = (i + 1); j < x; j++)
        {
            if(arr3[i] > arr3[j]){
                temp = arr3[j];
                arr3[j] = arr3[i];
                arr3[i] = temp;
            }
        }
        
    }
    printf("\nsorting\n");

    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr3[i]);
    }
    
    printf("Kth element is %d ", arr3[k - 1]);
    
}

int main(){
    int arr1[] = {100, 112, 256, 349, 770}, arr2[] = {72, 80, 113, 119, 265, 445, 892}, m = (sizeof(arr1) / sizeof(int)), n = (sizeof(arr2) / sizeof(int)), k =7;
     int  arr3[10] = {}, j = 0;
    for (int i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
    }
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ", arr3[i]);
    // }
    
    for (int i = m; i < (m + n); i++)
    {
        arr3[i] = arr2[j];
        j++;
    }
    for (int i = 0; i < (m + n); i++)
    {
        printf("%d ", arr3[i]);
    }
    int x = m + n;
    sort(arr3, x, k);
}