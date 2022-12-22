#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void display(struct node *start)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = start;
    while (temp->next != start)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
    printf("\n");
}

void insert(struct node *start, int val, int loc)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int i = 0;

    newNode->data = val;
    newNode->next = NULL;
    temp = start;
    if (loc == 0)
    {
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = start;
        start = newNode;
    }
    else
    {   
        temp = start;
         while (i != loc - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    display(start);
}

int main()
{
    int val, loc;

    struct node *start = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    // start = NULL;

    start->data = 1;
    start->next = second;

    second->data = 2;
    second->prev = start;
    second->next = third;

    third->data = 4;
    third->prev = second;
    third->next = start;

    display(start);
    printf("Enter Location to insert\n");
    scanf("%d", &loc);
    printf("Enter element to insert\n");
    scanf("%d", &val);
    insert(start, val, loc);
}