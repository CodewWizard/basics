#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front = -1, rear = -1;

void enQueue(){
    int val;
    printf("Enter element to insert\n");
    scanf("%d",&val);
    if(rear == max - 1){
        printf("OverFlow\n");
        return;
    }
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    }
    else{
        rear += 1;
    }
    queue[rear] =  val;
    printf("%d Inserted\n",val);
}

void deQueue(){
    int val;
    if(front == -1 && front > rear){
        printf("UnderFlow\n");
    }
    if(rear == front){
        printf("%d Deleted \n",queue[rear]);
        rear = -1;
        front = -1;
    }
    else{
        printf("%d Deleted \n",queue[front]);
        front += 1;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    int choice = 0;
    printf("Queue..");
    while (choice != 4)
    {
        printf("\n1. Insert \n2. Delete \n3. Display\n");
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter valid choice\n");
            break;
        };
    }
}