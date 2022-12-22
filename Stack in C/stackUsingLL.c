#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start;

void push(){
    int val;
    struct node* ptr = (struct node *) malloc(sizeof(struct node));
    printf("Enter element to insert\n");
    scanf("%d",&val);

    ptr->data = val;

    if(start == NULL){
        ptr->next = NULL;
        start = ptr;
    }
    else{
        ptr->next = start;
        start = ptr;
    }
    printf("%d pushed\n", val);
}

void pop(){
    int item;
    struct node *ptr;
    if(start == NULL)
        printf("UnderFlow\n");
    else{
        item = start->data;
        ptr = start;
        start = start->next;
        free(ptr);
        printf("%d Popped \n", item);
    }
}

void display(){
   struct node *temp;
   temp = start;
   if(temp == NULL)
        printf("Stack is empty");
     else{
   printf("Printing Stack elements ");
   while (temp!= NULL)
   {
       printf("%d ",temp->data);
       temp = temp->next;
   }
   printf("\n");
    }
}

int main(){
    int choice = 0;
    printf("Stack using Linked List");
    while (choice != 4)
    {
        printf("\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch (choice)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3 : display();
            break;
        default:
            printf("Enter valid choice\n");
        };   
    }
}