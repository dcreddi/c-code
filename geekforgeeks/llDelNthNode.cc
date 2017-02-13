#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

//newNode
struct node* newNode(int x)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}

//insert at head
void Insert(struct node* &head, int x)
{
    struct node* curr = newNode(x);
    curr->next = head;
    head = curr;
}

//length of ll
int lengthLl(struct node* head)
{
    int size = 0;
    while(head != NULL)
    {
        size++;
        head = head->next;
    }
    printf("size %d \n",size);
    return size;
}

//del Nth Node
void delNthNode(struct node* &head, int n)
{
    struct node* curr = head;
    struct node* temp = head;
    struct node* prev = head;
    
    
    //head
    if ( n == 0)
    {
        struct node* curr = head->next;
        free(head);
        head = curr;
        return;
    }

    int size;
    size = lengthLl(head);
    if  (n >= size)
    {
        printf("\nasked nth node %d, is greater that length of ll %d.",n,size); 
        return;
    }
    else
    {
        int counter = 0;
        while(counter < n)
        {
            prev = curr;
            curr = curr->next;
            counter++;
        }
        prev->next = curr->next;
        return;
        
    }
}

//Print ll
void Print(struct node* head)
{
    printf("\nlist is: ");
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}


int main()
{
    struct node* head = NULL;
    int i;
    for (i = 10; i >= 1 ; i--)
    {
        Insert(head,i);
        Print(head);
    }
    delNthNode(head,10);
        Print(head);
}



