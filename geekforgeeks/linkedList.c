#include<stdio.h>
#include<stdlib.h>

//Linked list structure
struct node
{
    int data;
    struct node* next;
};
//rtrn pointer to new node
struct node* newNode(int data)
{
    struct node* new = (struct node*) malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

//insert node at head 
void push(struct node** headRef, int data)
{
    struct node* new = newNode(data);
    new->next = *headRef;
    *headRef = new;
}

//insert at tail
void append(struct node** headRef, int data)
{
    struct node* new = newNode(data);
    
    if (*headRef == NULL)
    {
        *headRef = new;
        return;
    }

    struct node* temp = *headRef;
 
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = new;
}

//insert new node after a given node
void insertAfter(struct node* temp, int prev, int data)
{
    if (temp == NULL)
    {
        printf("list is empty\n");
        return;
    }

    while(temp->data != prev && temp->next != NULL)
        temp = temp->next;
    
    if (temp->data != prev)
    {
        printf("Node %d is not present in list\n", prev);
        return;
    }
    struct node* curr = newNode(data);
    curr->next = temp->next;
    temp->next = curr;
}         

//print linked list
void print(struct node* temp)
{
    printf("\nlist is: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node* head = NULL;
    append(&head,0);
    push(&head,1);
    push(&head,2);
    push(&head,3);
    print(head);
   
    append(&head,-1);
    print(head);

    insertAfter(head,3,20);
    insertAfter(head,-1,-10);
    print(head);
}

