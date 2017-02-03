#include<stdio.h>
#include<stdlib.h>

struct node{        //node structure
    int data;
    struct node* next;
};

struct node* getNode(int x){        //return new node
    struct node* temp = (struct  node*)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;
    return temp;
}

void insert(struct node* &head, int x){     //insert at head
    struct node* temp = getNode(x);
    temp -> next = head;
    head = temp;
}

void append(struct node* &head, int x){     //insert at tail
    struct node* temp = getNode(x);
    struct node* tail = head;
    if (tail == NULL){
        tail = temp;
        return;
    }
   while (tail -> next  != NULL){
        tail = tail -> next;
    }
    tail -> next = temp;
    return;
}

struct node* findNode(struct node* head,int p){     //search and return a node
    while( head && head->data != p ) {
        head = head->next;
    }
    return head;
}

struct node* findPrevNode(struct node* head, int a){        //search n return previous node
    struct node* prev;
    int i = 0;
    while(head -> data != a){
        i++;
        prev = head;
        head = head -> next;
    }
    // if i = 
    return prev;
}

void insertAfter(struct node* head,int p,int x){        //insert after a node
    if( head == NULL )
        return;
    struct node* after = findNode(head, p);
    if( after == NULL ) 
        return;
    struct node* temp = getNode(x); temp -> next = after -> next; after -> next = temp;
}

void insertBefore1(struct node* &head, int a, int x){     //insert before a node
    struct node* prev = findPrevNode(head, a);
    struct node* temp = getNode(x);
    if (prev -> data == head -> data){
        printf("prev %d head %d\n",prev->data,head->data);
        temp -> next = head;
        head = temp;}
    else
    {
        temp -> next = prev -> next;
        prev -> next =  temp;
    }
}

void insertBefore(struct node* &head, int a, int x)    //insert before a node
{ 
    // head NULL case
    if ( head == NULL )
        return;
    if ( head->data == a ) {
        // inserting before head
        struct node *t = getNode( x );
        t->next = head;
        head = t;
        return;
    }
    
    struct node* prev = head;
    struct node* pprev = NULL;
    while( prev->data != a ) {
        pprev = prev;
        prev = prev->next;
    }
    // handle no element
    if( prev == NULL ) {
        printf( "element not found: %d\n", a );
        return;
    }

    struct node *t = getNode( x );
    t->next = prev->next;
    prev->next = t;
    return;
}

void sizeofLlist(struct node* head){     //size of ll
    int counter =   0;
    while(head != NULL){
        head = head ->  next;
        counter++;}
    printf("size is %d\n",counter);
}

void print(struct node* head){      //print ll
    printf("list is: \n");
    while(head != NULL){
        printf("%d ",head -> data);
        head = head -> next;
    }
    printf("\n");
}




int main (){
    struct node* head = getNode(1);
    
    print(head);        //takes arg head
    //insert(head,1);
    insert(head,2);     //takes arg head,data insert at head  
    print(head);
    int arr[] = {3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i < n; i++){
        insert(head,arr[i]);
        print(head);
    }
    append(head,0);     //takes arg head,data insert at tail
    print(head);
    insert(head,8);
    insert(head,11);
    print(head);
    insertAfter(head,8,7);      //takes arg head,prev node w.r.t new node,data
    print(head);
    insertBefore(head,8,9);     //takes arg head, after node w.r.t new node,data
    print(head);
    insertAfter(head,11,10);
    print(head);
    /* printAsc(head);        // arg head n prints list in asc order 
    printDsc(head);          // arg head n prints list in dsc order 
    sortAsc(head);
    sortDsc(head);
    delNode(head,x);  */        //srg
    insertBefore(head,11,12);
    print(head);
}
    

