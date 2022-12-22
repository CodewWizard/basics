#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node * next;
};

void insert(int newNode, struct node *start){
    struct node * ptr = malloc(sizeof(struct node));
    struct node * temp = malloc(sizeof(struct node));
    
    //test case 1 : if list is empty
    if(start == NULL){
        printf("Underflow");
    }

    // test case 2 : if list conatins only 1 element
    if(start->next == NULL){
          temp->data = newNode;
          temp->next = start;
          start = temp;

    }    

    //test case 3:if list contains more than one element
    if(start->next !=NULL){
         temp->data =newNode;
         temp->next=NULL;
         temp->next = start;
         start = temp;
    }
        display(start);
}

void display(struct node *ptr){
      while (ptr !=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct node * start = malloc(sizeof(struct node));
    struct node * second = malloc(sizeof(struct node));
    struct node * third = malloc(sizeof(struct node));

    int new;
    start -> data = 2;
    start -> next = second; 

     second -> data = 5;
    second -> next = third; 

     third -> data = 8;
    third -> next = NULL; 

    printf("Enter element to insert ");
    scanf("%d",&new);
    insert(new, start);
    // display(start);
}