#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* link;
}
struct Node* head;
void Insert(int x);
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
Node* temp 
}

void Print();
int main() {
    head = NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        printf("Enter your number\n");
        scanf("%d",&x);
        Insert(x);
        Print();

}
}
    
