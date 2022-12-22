// #include <stdio.h>  
  
// /* Function to merge the subarrays of a[] */  
// void merge(int a[], int beg, int mid, int end)    
// {    
//     int i, j, k;  
//     int n1 = mid - beg + 1;    
//     int n2 = end - mid;    
      
//     int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
//     /* copy data to temp arrays */  
//     for (int i = 0; i < n1; i++)    
//     LeftArray[i] = a[beg + i];    
//     for (int j = 0; j < n2; j++)    
//     RightArray[j] = a[mid + 1 + j];    
      
//     i = 0; /* initial index of first sub-array */  
//     j = 0; /* initial index of second sub-array */   
//     k = beg;  /* initial index of merged sub-array */  
      
//     while (i < n1 && j < n2)    
//     {    
//         if(LeftArray[i] <= RightArray[j])    
//         {    
//             a[k] = LeftArray[i];    
//             i++;    
//         }    
//         else    
//         {    
//             a[k] = RightArray[j];    
//             j++;    
//         }    
//         k++;    
//     }    
//     while (i<n1)    
//     {    
//         a[k] = LeftArray[i];    
//         i++;    
//         k++;    
//     }    
      
//     while (j<n2)    
//     {    
//         a[k] = RightArray[j];    
//         j++;    
//         k++;    
//     }    
// }    
  
// void mergeSort(int a[], int beg, int end)  
// {  
//     if (beg < end)   
//     {  
//         int mid = (beg + end) / 2;  
//         mergeSort(a, beg, mid);  
//         mergeSort(a, mid + 1, end);  
//         merge(a, beg, mid, end);  
//     }  
// }  
  
// /* Function to print the array */  
// void printArray(int a[], int n)  
// {  
//     int i;  
//     for (i = 0; i < n; i++)  
//         printf("%d ", a[i]);  
//     printf("\n");  
// }  
  
// int main()  
// {  
//     int a[10];  
//     int n;
//     printf("Enter size of an array ");
//     scanf("%d",&n);
//     printf("Enter array to sort ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
 
//     printf("Before sorting array elements are - \n");  
//     printArray(a, n);  
//     mergeSort(a, 0, n - 1);  
//     printf("After sorting array elements are - \n");  
//     printArray(a, n);  
//     return 0;  
// } 



#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{ 
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    mergeSort(A, 0, 6);
    printArray(A, n);
    return 0;
}