#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head;

void insert_athead(int n){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    (*temp).data = n;
    (*temp).next = head;
    head = temp;
}

void print_fromhead(){
    printf("linked list: ");
    struct node* temp = head;
    while(temp  != NULL){
        printf("%d ", (*temp).data );
        temp = (*temp).next;
    }
}

int main(){
    head = NULL;
    printf("\nhow many nodes? ");
    int n,i,d ;
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        printf("\n enter integer data:");
        scanf("%d",&d);
        insert_athead(d);
        print_fromhead();
    }
}


