#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
    struct node * prev;
};

void display(struct node * start){
    struct node * temp = (struct node *) malloc (sizeof(struct node));
    temp = start;
    while (temp->next != start)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
    printf("\n");
}
void insert(struct node * start, int val){
    struct node * newNode = (struct node *) malloc (sizeof(struct node));
    struct node * temp = (struct node *) malloc (sizeof(struct node));
    newNode->data = val;
    newNode->prev = NULL;

    if(start == NULL){
        newNode->next = start;
        start = newNode;
    }
    if(start->next == start){
        newNode->next = start;
        start->next = newNode;
        start = newNode;
    }
    else{
        newNode->next = start;
        temp = start;
        while (temp->next != start)
        {
           temp = temp->next;
        }
        temp->next = newNode;
        start = newNode; 
    }
    display(start);
}


int main(){
    int val;
  
    struct node * start = (struct node *) malloc (sizeof(struct node));
    struct node * second = (struct node *) malloc (sizeof(struct node));
    struct node * third = (struct node *) malloc (sizeof(struct node));

    start->data = 2;
    start->prev = NULL;
    start->next = second;

    second->data = 3;
    second->prev = start;
    second->next = third;

    third->data = 4;
    third->prev = second;
    third->next = start;

    display(start);
    printf("Enter element to insert\n");
    scanf("%d",&val);
    insert(start, val);
}