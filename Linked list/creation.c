#include<stdio.h>
#include<stdlib.h>


struct Node
{
   int data;
   struct Node * next;
};

void traversal(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
}

int main(){ 
    struct Node * start, *second,* third;
    // start = (struct Node *)  malloc (sizeof(struct Node)); 
    start =  malloc (sizeof(struct Node)); //it will also run
    second = malloc (sizeof(struct Node));
    third =  malloc (sizeof(struct Node));


    start->data = 5;
    start->next = second;

    second->data = 2;
    second->next = third; 
    
    third->data = 9;
    third->next = NULL;

    traversal(start);
}