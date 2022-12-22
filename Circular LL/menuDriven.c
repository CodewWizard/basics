#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;;
};


struct node* create(){ 
    struct node *start = malloc(sizeof(struct node));
    start->next = start;
    return start;
}

struct node *insertAtBeg(struct node *start){
    struct node * newNode = (struct node *) malloc (sizeof(struct node));
    struct node * temp = (struct node *) malloc (sizeof(struct node));
    int val;
    printf("Enter element to insert\n");
    scanf("%d",&val);
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
    return start;
}

void display(struct node *start){
    struct node * temp =(struct node *) malloc (sizeof(struct node));
    temp = start;   
    while (temp->next != start)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}

int main(){
    int choice;
    struct node * temp;
    while(1){
        printf("1. Create Linked List \n2. Insert At Beginning in Circular Linked List \n3. Insert At End in Circular Linked List \n4. Insert At Specific location in Circular Linked List \n5. Display");
        printf("Enter Choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Create\n");
            temp = create();
            break;
        case 2:
            printf("Insert\n");    
            temp = insertAtBeg(temp);
            break;
        case 3:
            printf("Display\n");
            display(temp);
            break;
        default:
            break;
        };
    }
}