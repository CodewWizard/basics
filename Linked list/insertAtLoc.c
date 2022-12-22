#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void display(struct node*);
void insert(struct node *start, int newNode, int pos){
    int i = 0;
    struct node * ptr = malloc(sizeof(struct node));
    struct node * p = start;

    while (i != pos - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = newNode;
    ptr->next = p->next;
    p->next = ptr;
    display(start);
}

void display(struct node *ptr){
     
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    int pos, newNode;
    struct node * start = malloc(sizeof(struct node));
    struct node * second = malloc(sizeof(struct node));
    struct node * third = malloc(sizeof(struct node));


    start->data = 2;
    start->next = second;

    second->data = 5;
    second->next = third;

    third->data = 7;
    third->next = NULL;

    printf("Enter position \n");
    scanf("%d", &pos);
    printf("Enter element  \n");
    scanf("%d", &newNode);
    insert(start, newNode, pos);

}