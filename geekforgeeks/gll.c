#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};


void printfromhead(struct node* n)
{
    while (n != NULL)
    {
       
        printf(" \ncurrent node data:%d,pointer: %p \n",n -> data,n);
        printf("address of next node stored in current node:%p \n",n -> next);

        n = n -> next;
    }
}
        
int main()
{
    struct node* first = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    first -> data = 1;
    first -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;
    
    printf("%p\n", first);
    printfromhead(first);
}
