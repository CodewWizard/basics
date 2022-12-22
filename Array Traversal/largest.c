#include <stdio.h>

int main()
{
    int arr[] = {1, 8, 4, 9, 2, 7}, size = (sizeof(arr) / sizeof(int)), end = size - 1, larg, i = 0;
    while (i <= end)
    {
        if (arr[i] < arr[i + 1])
        {
            larg = arr[i + 1];
            printf("%d ", larg);
        }
        else if(larg < arr[i])
        {
            larg = arr[i];
            printf("%d ", larg);
        }
        i++;
    }

    printf("%d ", larg);
}