#include<stdio.h>

int sqrtt(int x){
    int start = 1, mid;
    long long int end = x;
    while (start < end)
    {
        mid = start + (end - start + 1) / 2;
        if(mid == (x / mid) ){
            return mid;
        }
        else if(mid > (x / mid)){
            end = mid - 1;
        }
        else{
            start = mid ;
        }
    }
     return start;
}

int main(){
    int x = 8;
    printf("%d ",sqrtt(x));
}