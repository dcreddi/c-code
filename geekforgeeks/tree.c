#include<stdio.h>
#include<stdlib.h>

//struct
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

//malloc and return new node
struct node* newNode(int data)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data = data;

    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

//malloc, insert new node left
void leftNode(struct node* temp,int data)
{   
    if (temp == NULL)
        return;
    
    while(temp != NULL){
        temp = temp->left;
    }
    temp = newNode(data);
    printf("inserted data %d at left\n",data);
}

//malloc, insert new node right
void rightNode(struct node* temp,int data)
{

    if(temp == NULL)
            return;
    
    while(temp != NULL){
       temp = temp->right;
    }
    temp  = newNode(data);
    printf("inserted data %d at right\n",data);
}

int main()
{
    struct node* root = newNode(1);
    leftNode(root,2);
    rightNode(root,3);
    leftNode(root,4);
    rightNode(root,5);
}

