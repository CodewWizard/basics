#include <stdio.h>
#include <limits.h>

double getMedian(int arr1[], int arr2[], int n1, int n2)
{
    int low = 0, high = n1, cut1, cut2, left1, left2, right1, right2, ans, max, min;
    while (low <= high)
    {
        cut1 = (low + high) >> 1;
        cut2 = ((n1 + n2 + 1) / 2) - cut1;

        left1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
        left2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];

        right1 = cut1 == n1 ? INT_MAX : arr1[cut1];
        right2 = cut2 == n2 ? INT_MAX : arr2[cut2];
        
        if(left1 <= right2 && left2 <= right1){
            if((n1 + n2) % 2 == 0){
                max = left1 > left2 ? left1 : left2;
                min = right1 < right2 ? right1 : right2;
                return ((max + min) / 2.0);
            }
            else{
                max = left1 > left2 ? left1 : left2;
                return max;
            }
        }

        if(left2 > right1){
            low = cut1 + 1;
        }
        else{
            high = cut1 - 1;
        }
    }

}

int main()
{
    int arr1[] = {2, 3, 5, 8}, arr2[] = {10, 12, 14, 16, 18, 20}, n1 = (sizeof(arr1) / sizeof(int)), n2 = (sizeof(arr2) / sizeof(int));
    double res = getMedian(arr1, arr2, n1, n2);
    printf("%f ", res);
}