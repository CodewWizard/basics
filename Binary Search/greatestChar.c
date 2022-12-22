#include<stdio.h>

char greatestChar(char letters[], int size){
    char target = 'j';
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(target < letters[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    // printf("%d %d ", start, size);
    return letters[start % size];
    
}

int main(){
    char letters[] = {'c', 'd', 'f', 'j'};
    int size = (sizeof(letters) / sizeof(char));
    // printf("%d ",size);
    char ans = greatestChar(letters, size);
    printf("%c ", ans);
}