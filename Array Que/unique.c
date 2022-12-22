#include<stdio.h>

int unique(int a[], int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {   
         res ^= a[i];
         printf("%d ",res);
    }
    return res;    
}

int main(){
    int a[] = {9, 2, 4, 4, 7, 2, 7};
    int n = 7;
    printf("%d ",unique(a, n));
}