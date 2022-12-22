#include<stdio.h>
#include<stdbool.h>

int max(int arr[], int size){
    int maxi = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

bool cowsDist(int arr[], int size, int start, int end, int mid, int cows){
    int c = 1, cord = arr[0];
    for (int i = 1; i < size; i++)
    {
        if((arr[i] - cord) >= mid){
            c++;
            cord = arr[i];
        }
        if (c == cows)
        {
            return true;
        }
    }
        return false;
}

int main(){
    int arr[] = {1, 2, 7, 5, 11, 12
    }, size = (sizeof(arr) / sizeof(int)), cows = 3, start = 1, ans, mid;
    int end = max(arr, size) - 1;
    while (start <= end)
    {
          mid = (start + end) / 2;
         if(cowsDist(arr, size, start, end, mid, cows)){
             ans = mid;
             start = mid + 1;
         }
         else{
                end = mid - 1;
         }
    }
    printf("%d ", ans);
}