#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//struct
struct node
{
    int top;
    unsigned size;
    int* arr;
};

//return pointer to new stack
struct node* createStack(size)
{
    struct node* newStack = (struct node*) malloc(sizeof(struct node));
    newStack->top = -1;
    newStack->size = size;
    newStack->arr = (int *) malloc(size * sizeof(int));
    return newStack;
}

//return true if stack full
int isFull(struct node* stack)
{
    return stack->top == stack->size - 1;
}

//push int into stack
void push(struct node* stack, int data)
{
    if (isFull(stack))
        return;
    stack->arr[++stack->top] = data;
}

//rtrn true if empty
int isEmpty(struct node *stack)
{
    return stack->top == -1;
}

//remove and return top
int pop(struct node *stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    printf("top %d\n",stack->top);
    return stack->arr[stack->top--];
}

//main
int main()
{
    struct node* stack = createStack(10);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d,",stack->arr[i]);
    }
    printf("\n");
    
    for (int i = 0; i <= (stack->top); i++)
    {
        printf("%d,",stack->arr[i]);
    }

    int popped = pop(stack);
    printf("\npopped: %d\n",popped);
    printf("top %d\n",stack->top);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d,",stack->arr[i]);
    }
    printf("\n");
 
    for (int i = 0; i <= (stack->top); i++)
    {
        printf("%d,",stack->arr[i]);
    }
  popped = pop(stack);
    printf("\npopped: %d\n",popped);
    printf("top %d\n",stack->top);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d,",stack->arr[i]);
    }
    printf("\n");
 
    for (int i = 0; i <= (stack->top); i++)
    {
        printf("%d,",stack->arr[i]);
    }
}

