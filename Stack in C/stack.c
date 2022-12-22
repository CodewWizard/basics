#include<stdio.h>
int stack[5], top = -1, n = 5;

void push(){
    int x;
    printf("Enter element to insert \n");
    scanf("%d",&x);
    if (top == -1)
    {
        top += 1;
        stack[top] = x;
        return;
    }
    if(top == n - 1)
        printf("Overflow\n");
    else{
        top += 1;
        stack[top] = x;
    }
}

void pop(){
    if(top == -1)
        printf("UnderFlow\n");
    else{
        printf("%d is deleted\n", stack[top]);
        top -= 1;
    }
}

void traverse(){
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    
}

int peek(){
    return stack[top];
}

int main(){
    push();
    push();
    push();
    push();
    push();
    pop();
    traverse();
    printf("\nElement at the top of the stack is %d\n", peek()); 
}