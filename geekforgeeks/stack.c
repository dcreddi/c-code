#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//struct
struct StackNode
{
    int val;
    struct StackNode *next;
};

//returns new node
struct StackNode *newNode(int val)
{
    struct StackNode *temp = (struct StackNode*)malloc(sizeof(struct StackNode));
    temp->val = val;
    temp->next = NULL;
    return temp;
}


//pust
void push(struct StackNode **root, int val)
{
    struct StackNode *new = newNode(val); //new node
    new->next = *root;
    *root = new;
    printf("%d pushed to stack\n",val);
}

int main()
{
    struct StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    
}
