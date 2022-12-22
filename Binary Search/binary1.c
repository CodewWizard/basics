#include <stdio.h>
#include <stdbool.h>
// Order Agnostic Binary Search
int orderAgnosticBS(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid;
    bool isAscending = arr[start] < arr[end];
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (isAscending)
        {
            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else
        {
            if (target > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[20];
    int size, target;
    printf("Enter size of array ");
    scanf("%d",&size);
    printf("Enter elemenets in sorted manner \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search ");
    scanf("%d",&target);
    int res = orderAgnosticBS(arr, size, target);
    printf("Element fount at %d position", res);
}