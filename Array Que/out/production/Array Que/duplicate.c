#include<stdio.h>

// Brute Force 
// Each integer is in the range [1, n] inclusive

// int findDuplicate(int a[]){
//     int slow = a[0];
//     int fast = a[0];

//     do
//     {
//         slow = a[slow];
//         fast = a[a[fast]];
//     } while (slow != fast);
    
//     fast = a[0];
//     while (slow != fast)
//     {
//         slow = a[slow];
//         fast = a[fast];
//     }
//     return fast;
// }

// int main(){
//     int a[] = {1, 3, 3, 4, 2};
//     int res = findDuplicate(a);
//     printf("%d", res);
// }

int findDuplicate(int a[], int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
       
    }
    
}

int main(){
    int a[] = {1, 3, 5, 1, 2};
    int res = findDuplicate(a, 5);
    printf("%d", res);
}