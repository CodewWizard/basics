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
    printf("\n");
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

void removeDuplicate(struct node *start){
    struct node * temp =  malloc(sizeof(struct node));
    struct node * temp1 =  malloc(sizeof(struct node));
    temp = start;
    temp1 = temp->next;
    while (temp != NULL)
    {
        if(temp->data == temp1->data){
            temp->next = temp1->next;
        }
        if(temp->data == temp1->data && temp1->next == NULL){
            temp->next = NULL;
            return;
        }
        temp = temp->next;
        temp1 = temp->next;
    }
}

int main(){
    struct node * start = malloc(sizeof(struct node));
    struct node * second = malloc(sizeof(struct node));
    struct node * third = malloc(sizeof(struct node));
    struct node * fourth = malloc(sizeof(struct node));
    struct node * fifth = malloc(sizeof(struct node));

    start->data = 1;
    start->next = second;

    second->data = 2;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = fifth;

    
    fifth->data = 3;
    fifth->next = NULL;

    int newNode;
    printf("Enter element to insert ");
    scanf("%d", &newNode);

    insertAtEnd(newNode, start);
    removeDuplicate(start);
    display(start);
}