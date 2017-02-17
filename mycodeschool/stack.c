#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node
{
    int val;
    struct Node *next;
};

//return new node
struct Node *newNode(int val)
{
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

//push
void push(struct Node **top, int val)
{
    struct Node *newTop = newNode(val);
    newTop->next = *top;
    *top = newTop;
  printf(" %d node pushed\n",val); 
}
    
//pop
void pop(struct Node **top)
{
    //if stack empty
    if (*top == NULL) 
    {
        printf("stack is empty\n");
        return;
    }
    
    struct Node *oldTop = *top;
    *top = oldTop->next;
    printf("%d popped",oldTop->val);
    free(oldTop);
}

//print
void print(struct Node **top)
{
    if (*top == NULL) 
    {
        printf("stack is empty\n");
        return;
    }

    struct Node *temp = *top;
    printf("\nstack is "); 
    while(temp != NULL)
    {
        printf("%d ",temp->val);
        temp = temp->next;
    }
}
 
int main()
{
    struct Node *top = NULL;
    push(&top, 2);
    push(&top, 5);
    push(&top, 7);
    pop(&top);
    print(&top);
}
