#include<stdio.h>
#include<stdlib.h>

struct node {
     int data;
    struct node* next;
};

struct node *newNode( int value )
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    (*temp).data = value;
    (*temp).next = NULL;
    return temp
        Printf("%d\n",temp);
}

void insert_head(struct node* &head, int h)
{
    struct node* temp = newNode( h );
    (*temp).next = head;
    head = temp;
}

void insert_tail()
{
}

// struct node *findNode( int h )
//     return NULL if h is not in the list
//     return node * if he is in the list

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
    insert_head( head, 7 );

    insert_tail( head, 50 );
    insert_tail( head, 60 );
    insert_tail( head, 70 );

    struct node *t = findNode( 60 );
    struct node *t2 = newNode( 65 );
    insert_after( head, t, t2 );

}

