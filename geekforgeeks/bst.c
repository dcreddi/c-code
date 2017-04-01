#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

//return new node
struct node* getNode(int data){
    struct node* temp = (struct node*) malloc(sizeof(strcut node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main (){
    struct node* root = getNode(5);
    insert(root,3);
    insert(root,6);
    insert(root,2);
    insert(root,1);
    insert(root,4);

