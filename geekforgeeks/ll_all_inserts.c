#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;

void print_head(struct node* head){
    
    while(head != NULL)
        {
        printf("%d\n",(*head).data);
        head = (*head).next;
        }
}
    
void  insert_head(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
}



//insert at nth node

//insert at tail

int main(){

    insert_head(6);
    print_head(head);
}

