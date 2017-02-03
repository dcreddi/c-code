#include<stdio.h>
#include<stdlib.h>

struct node {
     int data;
    struct node* next;
};

void insert_head(struct node* &head, int h)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    (*temp).data = h;
    (*temp).next = head;
    head = temp;
}

void insert_tail()
{
}

void print_head(struct node* head)
{
    printf( "List: " );
    while(head != NULL)
    {
        printf("%d ",(*head).data);
        head = (*head).next;
    }
    printf( "\n" );
}

int main (){
    struct node* head = NULL;
    int arr[] = { 2, 3, 10, 4, 20 };
    int n = sizeof( arr ) / sizeof( int );
    for( int i = 0; i < n; i ++ ) {
        insert_head(head, arr[ i ] );
        print_head(head);
    }
}

