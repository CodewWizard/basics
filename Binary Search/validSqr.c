#include <stdio.h>
#include <stdbool.h>

int validSquare(int num)
{
    int start = 1, end = num, mid;
        while(start <= end){
            mid = (start + end) / 2;
            if(mid < (num / mid)){
                start = mid + 1;
            }
            else if(mid == (num/mid) && num % mid == 0){
                return 1;
            }
            else{
                end = mid - 1;
            }
        }
        return 0;
    }


int main()
{
    int num = 81;
    int ans = validSquare(num);
    printf("%d ", ans);
}