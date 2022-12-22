#include<stdio.h>

int intersect(int a[], int b[], int m, int n){
    int res;
    for (int i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; i++)
        {
            if(a[i] == b[j]){
                return a[i];
            }   
        }
    }
}

int main(){
    int a[] = {1, 2, 4};
    int m = 3;
    int b[] = {3, 4};
    int n = 2;
    printf("%d ",intersect(a, b, m ,n));
}