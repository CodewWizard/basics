#include<stdio.h>
#include<stdlib.h>

#define max 5
int front = -1, rear = -1, queue[max];

void enQueue(){
    int val;
    printf("Enter element to insert\n");
    scanf("%d",&val);
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    }
    else if((rear + 1) % max == front){
        printf("Overflow\n");
        return;
    }
    else{
        rear = ((rear + 1) % max);
    }
    queue[rear] = val;
    printf("%d inserted \n",queue[rear]);
}

void deQueue(){
    if (front == -1 && rear == -1)
    {
        printf("UnderFlow\n");
        return;
    }
    if (front == rear)
    {
        printf("Deleted item is %d\n",queue[rear]);
        front = -1;
        rear = -1;
    }
    else{
        printf("Deleted item is %d\n",queue[front]);
        front = (front + 1) % max;
    }   
}

void display(){
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
        return;
    }  
    else{
        printf("Elements in Queue are ");
        while(i <= rear)
        {
            printf("%d ",queue[i]);
            i = (i + 1) % max;
        }
    }
}

int main(){
    int choice = 0;
    printf("Circlular Queue\n");
    while (choice != 4)
    {
        printf("\n1. Insert \n2. Delete \n3. Display \n");
        printf("Enter Choice \n");
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
            printf("Enter Valid Choice");
            break;
        }
    }
}