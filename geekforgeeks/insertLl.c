#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//node structure
struct node{
    int val;
    struct node* next;
};

int sizeList( struct node *head);

//print ll from head
void print(struct node* head)
{
    int n;
    n = sizeList(head);
    printf("\nsize of list %d",n);
    
    //if list empty
    if (head == NULL)
    {
        printf("\nlist is empty\n");
        return;
    }

    //print list
    printf("\nlist is: ");
    while(head != NULL)
    {
        printf("%d\t",head->val);
        head = head->next;
    }
    printf("\n");
}

//returns new node 
struct node* newNode(int val)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

//length of list
int sizeList(struct node* head)
{
    int counter = 0;
    while(head != NULL)
    {
        counter++;
        head = head->next;
    }
    return counter;
}

//inserts new node at head
void insertAtHead(struct node** head, int val)
{
    struct node* new = newNode(val); 
    new->next = *head;
    *head = new;
    printf("\ninserted node %d as head",val);
}

//deletes a given node
void delNode(struct node** head, int val)
{
    struct node* curr = *head;
    struct node* prev = *head;
    
    //if list is empty
    if (*head == NULL)
        return;

    //if val is head
    if (curr != NULL && (curr->val) == val)
    {
        printf("\ndeleted head node %d ",val);
        *head = curr->next;
        free(curr);
        return;
    }

    //if val other than head
    while (curr !=NULL && (curr->val != val))
    {
        prev = curr;
      
        curr = curr->next;
    }
    if (curr == NULL)
    {
        printf("\nnode %d not found",val);
        return;
    }
    printf("\ndeleted node %d",val);
    prev->next = curr->next;
    free(curr);
    return;
}

//del nth node
void delIndex(struct node** head, int n)
{
    struct node* curr = *head;
    struct node* prev = *head;

    //if empty list
    if (*head == NULL)
        return;

    //if head
    if (n == 0)
    {
        *head = curr->next;
        printf("\ndeleted head node %d",curr->val);
        free(curr);
        return;
    }
    int index = 0;
    while(curr != NULL && index < n)
    {
        index++;
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        printf("\nasked position %d exceed size of list",n);
        return;
    }
    prev->next = curr->next;
    printf("\ndeleted node %d",curr->val);
    free(curr);
    return;
}

//search for node return true false
bool search(struct node* head,int x)
{
    struct node* temp = head;
    while(temp != NULL)
    {   
        if (temp->val == x)
           // printf("\nnode %d found",x);
            return true;
        temp = temp->next;
    }
   // printf("\nnode %d not found",x);
    return false;
}

//swap two nodes

int main()
{
    struct node* head = NULL;
    print(head);
    insertAtHead(&head,8);
    print(head);
    insertAtHead(&head,7);
    print(head);
    insertAtHead(&head,6);
    print(head);
    insertAtHead(&head,5);
    print(head);
    delNode(&head,5);
    print(head);
    delNode(&head,7);
    print(head);
    delNode(&head,10);
    print(head);
    delNode(&head,8);
    print(head);
    delNode(&head,6);
    print(head);
    delNode(&head,6);
    print(head);
    insertAtHead(&head,5);
    print(head);
    insertAtHead(&head,6);
    print(head);
    insertAtHead(&head,7);
    print(head);
    insertAtHead(&head,8);
    print(head);
    delIndex(&head,1);
    print(head);
    delIndex(&head,0);
    print(head);
    delIndex(&head,4);
    print(head);
    delIndex(&head,1);
    print(head);
    delIndex(&head,0);
    print(head);
    delIndex(&head,0);
    print(head);
    insertAtHead(&head,8);
    print(head);
    insertAtHead(&head,7);
    print(head);
    insertAtHead(&head,6);
    print(head);
    insertAtHead(&head,5);
    print(head);
    search(head,8)? printf("Yes"):printf("No");
    search(head,5)? printf("Yes"):printf("No");
    search(head,10)? printf("Yes") : printf("No");
    insertAtHead(&head,4);
    print(head);
    insertAtHead(&head,3);
    print(head);
    insertAtHead(&head,2);
    print(head);
    insertAtHead(&head,1);
    print(head);
/*    swapNodes(&head,1,2);
    print(head);
    swapNodes(&head,2,4);
    print(head);
    swapNodes(&head,4,8);
    print(head);
    swapNodes(&head,7,4);
    print(head);*/
}

