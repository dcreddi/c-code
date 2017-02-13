#include<stdio.h>
#include<stdlib.h>

//node struct
struct node{
       int data;
       struct node* next;
};

//print ll
void print(struct node* head)
{
    printf("\nlist: ");
    while(head != NULL)
    {
        printf("%d ",head->data);

        head = head->next;

    }

}
//newNode
struct node* newNode(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}

//insert node at head
void insertHead(struct node* &head, int x)
{
    struct node* temp = newNode(x);
    temp->next = head;
    head = temp;
}

//size of list

int listSize(struct node* head)
{
    int counter = 0;      while(head != NULL)
    {
        counter++;
        head = head->next;
    }
    printf("size %d ",counter);
    return counter;
}

/*//reverse list
struct node*revList(struct node* &mid)
{
    struct node* curr = mid;
    struct node* prev = NULL;         struct node* next;
                while(curr !=NULL)
                {
                    next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }
                mid = prev;
                return mid;
}
*/

struct node* revList(struct node* &head)
{
    struct node* curr = head;
    struct node* next;
    struct node* prev = NULL;
    while(head != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

struct node* revListRec(struct node* &head)
{
    if(head == NULL)
        return head;
    if(head->next == NULL)
        return head->next;
    struct node* head =revListRec(struct node* &head)
    {


//reverse half list
void revHalfList(struct node* &head)
{
    struct node* temp = head;
    struct node* prev = head;
    int i;
    int size = listSize(head);
    for(int i = 0; i < (size/2); i++)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = revList(temp);
}


int main()
{
    struct node* head = NULL;
    insertHead(head,8);
    insertHead(head,7);
    insertHead(head,6);
    insertHead(head,5);
    print(head);
    insertHead(head,1);
    insertHead(head,2);
    insertHead(head,3);
    insertHead(head,4);
    print(head);
    int n = listSize(head);
    revHalfList(head);
    print(head);
}
