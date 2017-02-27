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
{    if (temp == NULL)
        return;
    
    while(temp->left != NULL){
        temp = temp->left;
    }
    temp->left = newNode(data);
   // printf("inserted data %d at left\n",data);
}

//malloc, insert new node right
void rightNode(struct node* temp,int data)
{

    if(temp == NULL)
            return;
    
    while(temp->right != NULL){
       temp = temp->right;
    }
    temp->right  = newNode(data);
 //   printf("inserted data %d at right\n",data);
}

//print tree

void printTree(struct node *temp)
{
    if(temp == NULL)
        return;
    printTree(temp -> right);
    printf("%d\n",temp -> data);
    printTree(temp -> left);
}

int main()
{
    struct node* root = newNode(1);
    leftNode(root,2);
    rightNode(root,3);
    leftNode(root,4);
    leftNode(root,5);
    rightNode(root,6);
   printTree(root);
}

