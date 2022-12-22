#include<stdio.h>
#include<stdlib.h>
int top = -1;
char mine[20];

void push(char item){
    top += 1;
    mine[top] = item;
    // printf("Push %c\n", mine[top]);
}

void pop(){
    top -= 1;
}

int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int match(char user[], int size){
    int i = 0;
    while (user[i] != '\0') 
    {
        // printf("%c ",user[i]);
        if(user[i] == '('){
            push(user[i]);
        }
         else if(user[i] == ')'){
           if(isEmpty()){
               return 0;
           }
           pop();
         }
        i++; 
    }
    if(isEmpty()){
       return 1;
    }
    else{
         return 0;
    }
}

int main(){
  char user[20] = "(a+b)";
  
    int size = (sizeof(user) / sizeof(char));
    if(match(user, size)){
        printf("Matched");
    }
    else{
         printf("Not Matched");
    }
}
