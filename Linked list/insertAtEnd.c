#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void display(struct node *ptr){
      while (ptr !=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void insertAtEnd(int newNode, struct node * start){
    struct node * temp = malloc(sizeof(struct node));
    struct node * ptr = malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Underflow");
    }

    if(temp->next == NULL){
        temp->data = newNode;
        temp->next = NULL;

        ptr = start;
        ptr->next = temp;
        start = ptr;
    }

    if(temp->next != NULL){
        temp->data = newNode;
        temp->next = NULL;
        ptr = start;
        while (ptr->next !=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        
    }
    display(start);
}


int main(){
    struct node * start = malloc(sizeof(struct node));
    struct node * second = malloc(sizeof(struct node));
    struct node * third = malloc(sizeof(struct node));
    struct node * fourth = malloc(sizeof(struct node));

    start->data = 2;
    start->next = NULL;

    // second->data = 4;
    // second->next = third;

    // third->data = 6;
    // third->next = fourth;

    // fourth->data = 8;
    // fourth->next = NULL;

    int newNode;
    printf("Enter element to insert ");
    scanf("%d", &newNode);

    insertAtEnd(newNode, start);
}