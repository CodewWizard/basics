#include<stdio.h>
#include<math.h>

double multiply(double no, double n){
    double ans = 1.0;
    for (int i = 0; i < n; i++)
    {
         ans = ans * no;
    }
    return ans;
}

double nthRoot(int n, int m){
    double start = 1, end = m, mid, eps = 1e-6;
    while ((end - start) > eps)
    {
        mid = (start + end) / 2;
        if(multiply(mid, n) < m){
            start = mid;
        }
        else{
            end = mid;
        }   
    }
    printf("%f ",start);
    printf("%f ",end);
    // printf("%f ",pow(m, (double)(1.0) / (double)n));
}

int main(){
    int n = 3, m = 125;
    nthRoot(n, m);
}