#include<stdio.h>
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
            printf("%d ",a[i]);
    }
}
void sortColor(int a[], int n){
    int low = 0, mid = 0, high = n - 1;
    int temp;
    while (mid <= high)
    {
        if(a[mid] == 0){
            // swap(a[mid++], a[low++]);
            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }
        else if(a[mid] == 2){
            // swap(a[mid++], a[high--]);
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
        else{
            mid++;
        }
    }

    
}

int main(){
    int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(a) / sizeof(int);
    sortColor(a, n);
    // printf("%d", n);
    print(a, n);
}