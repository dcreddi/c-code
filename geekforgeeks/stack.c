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
 
//isEmpty
int isEmpty(struct Node *top)
{
    return !top;
}

//pop
int pop(struct Node **top)
{
    //if stack empty
    if (isEmpty(*top)) 
    {
        printf("stack is empty\n");
        return 0;
    }
    
    struct Node *oldTop = *top;
    *top = oldTop->next;
    printf("%d popped\n",((*top)->val));
    int popped = oldTop->val;
    free(oldTop);
    return popped;
}

//returns top
int peek(struct Node *top)
{
    if(isEmpty(top))
    {
        printf("stack is empty\n");
        return 0;
    }

    return top->val;
}

//print
void print(struct Node *top)
{
    if (top == NULL) 
    {
        printf("stack is empty\n");
        return;
    }

    struct Node *temp = top;
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
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    printf("%d poped\n",pop(&top));
    printf("%d is top element\n",peek(top));
    print(top);
}
