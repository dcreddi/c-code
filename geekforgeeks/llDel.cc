#include<stdio.h>
#include<stdlib.h>

// DS
struct node {
    int data;
    struct node* next;
};

// takes int and returns node, NULL in next
 struct node* getNode(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}


// new head and new node at head
void insertHead(struct node* &head, int x){
    struct node* curr = head;
    head = getNode(x);
    head->next = curr;
}

 // del node
void delNode(struct node* &head, int x){
    struct node* curr = head;
    struct node* prev = head;
    struct node* temp;
    
    //if list is empty
    if(head == NULL){
        printf("ll is empty\n");
        return;
    }

    while(curr != NULL){

        //if x head  
        if  ((head->data) == x)
        {
            printf("\ndeleted head node %d ",head->data);
            temp = head->next;
            free(head);
            head = temp;
            return;
        }
     
        //if x is not head or tail
        if  (curr->data == x)
        {
            printf("\ndeleted node %d ",curr->data);
            prev->next = curr->next;
            free(curr);
            return;
        }
        prev = curr; 
        curr = curr->next;
    }
    printf("\nnode %d not present",x);
}

// print ll
 void Print(struct node* head){
    printf("\nlist: ");
    while(head  != NULL){
        printf("%d ",head->data);
        head = head->next;
    }
 }


int main (){
    struct node* head = NULL;
    insertHead(head,4);
    int arr[] = {3,1,2,1,1};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i < n; i++){

        insertHead(head,arr[i]);
    }
    Print(head);
    for(int j =0; j<10; j++){
        delNode(head,1);
        Print(head);
    }
    delNode(head,1);
    Print(head);
    delNode(head,2);
    Print(head);
    delNode(head,4);
    Print(head);
    delNode(head,10);
    Print(head);
}
