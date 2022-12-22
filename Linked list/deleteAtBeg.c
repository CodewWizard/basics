#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void display(struct node * ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr= ptr->next;
    }
    printf("\n");
}

void delete(struct node *start){
    struct node * temp = (struct node *)malloc (sizeof(struct node));
    temp = start;
    start = start->next;
    temp->next = NULL;
    free(temp);
    display(start);    
}

int main(){
    struct node * start = (struct node *) malloc( sizeof(struct node));
    struct node * second = (struct node *) malloc( sizeof(struct node));
    struct node * third = (struct node *) malloc( sizeof(struct node));
    struct node * fourth = (struct node *) malloc( sizeof(struct node));

    start->data = 1;
    start->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    display(start);
    delete(start);
}