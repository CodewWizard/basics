#include<stdio.h>
int main(){
    int arr[10];
    int search = 10, size, f = 0, low = 0, high = size-1, mid;
    printf("Enter size of array")
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == search){
            f = 1;
            break;
        }
        if(arr[mid] < search){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(f == 1){
        printf("Element %d found", search);
    }
    else{
        printf("Element not found");
    }
}

