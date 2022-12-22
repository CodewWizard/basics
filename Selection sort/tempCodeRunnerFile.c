void swap(int a[],int max, int last){
    int temp =a[last];
    a[last] = a[max];
    a[max] = temp;
}