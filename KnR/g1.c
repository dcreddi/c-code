#include<stdio.h>
#include<stdlib.h>

//a ll int node
struct node{
    int data;
    struct node* next;
};

//traversal from head
void Printlist(struct node* n)
{
    while (n != NULL)
    {
        printf("%d ", n -> data);
        n = n -> next;
    }
}

//ll with 3 nodes
int main()
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    //3 nodes in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;
    
    Printlist(head);
    return 0;

}
