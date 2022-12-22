#include<stdio.h>
#include<stdlib.h>

struct list1
{
    int data;
    struct list1 * next;
};
struct list2
{
    int data;
    struct list2 * next;
};
struct ans
{
    int data;
    struct ans * next;
};
void display(struct list1 *ptr){
      while (ptr !=NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void insertAtEnd(int newNode, struct list1 * head1){
    struct list1 * temp = malloc(sizeof(struct list1));
    struct list1 * ptr = malloc(sizeof(struct list1));
    if(temp == NULL){
        printf("Underflow");
    }

    if(temp->next == NULL){
        temp->data = newNode;
        temp->next = NULL;

        ptr = head1;
        ptr->next = temp;
        head1 = ptr;
    }

    if(temp->next != NULL){
        temp->data = newNode;
        temp->next = NULL;
        ptr = head1;
        while (ptr->next !=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        
    }
}

struct ans * merge(struct node * head1, struct node * head2){
    struct list1 * node1 = malloc(sizeof(struct list1));
    struct list2 * node2 = malloc(sizeof(struct list2));
    node1 = head1;
    node2 = head2;
    
    struct ans * ans1 = malloc(sizeof(struct ans));

    while (node1->next != NULL || node2->next != NULL)
    {
        if(node1->data < node2->data){
            ans1->data = node1->data;
            node1 = node1->next;
        }
        else{
            ans1->data = node2->data;
            node2 = node2->next;
        }
    }
    while (head1 != NULL)
    {
        ans1->data = node1->data;
        node1 = node1->next;
    }
    while (head2 != NULL)
    {
        ans1->data = node2->data;
            node2 = node2->next;
    }
    display(ans1);
}


int main(){
    struct list1 * head1 = malloc(sizeof(struct list1));
    struct list1 * second1 = malloc(sizeof(struct list1));
    struct list1 * third1 = malloc(sizeof(struct list1));
    struct list1 * fourth1 = malloc(sizeof(struct list1));

    head1->data = 1;
    head1->next = second1;

    second1->data = 3;
    second1->next = third1;

    third1->data = 5;
    third1->next = NULL;

    display(head1);

    struct list2 * head2 = malloc(sizeof(struct list2));
    struct list2 * second2 = malloc(sizeof(struct list2));
    struct list2 * third2 = malloc(sizeof(struct list2));
    struct list2 * fourth2 = malloc(sizeof(struct list2));

    head2->data = 1;
    head2->next = second2;

    second2->data = 2;
    second2->next = third2;

    third2->data = 9;
    third2->next = NULL;

    display(head2);
    struct ans * li = malloc(sizeof(struct ans));
    li= merge(head1, head2);

    // fourth->data = 8;
    // fourth->next = NULL;

    int newNode;
    // printf("Enter element to insert ");
    // scanf("%d", &newNode);

    // insertAtEnd(newNode, head1);
}