#include<stdio.h>
#include<limits.h>

int maxx(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int min(int a, int b){
    if(a > b)
        return b;
    else
        return a;
}

int getKthPos(int arr1[], int arr2[], int n, int m, int k){
    int start, end , cut1, cut2, left1, left2, right1, right2, max;
    if (n > m)
    {
        return getKthPos(arr2, arr1, m, n, k);
    }
    start = maxx(0, k-m), end = min(k, n);
    while (start <= end)
    {
        cut1 = (start + end) / 2;
        cut2 = k - cut1;
        
        left1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
        left2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];

        right1 = cut1 = n ? INT_MAX : arr1[cut1];
        right2 = cut2 = m ? INT_MAX :arr2[cut2];

        if(left1 <= right2 && left2 <= right1){
            max = left1 > left2 ? left1 : left2;
            return max;
        }
        else if(left2 > right1){
           start = cut1 + 1; 
        }
        else{
             end = cut1 - 1; 
        }
    }
    return -1;
    
}

int main(){
    int arr1[] = {2, 3, 6, 7, 9}, arr2[] = {1, 4, 8, 10}, n = (sizeof(arr1) / sizeof(int)), m = (sizeof(arr2) / sizeof(int)), k = 5;
    int res = getKthPos(arr1, arr2, n, m, k);
    printf("%d ", res);
}

