#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//struct
struct node
{
    int fr, re, size;
    unsigned capacity;
    int* arr;
};

//create node and return ptr to node
struct node* createQueue(int capacity)
{
    struct node* new = (struct node*) malloc(sizeof(struct node));
    new->fr = 0;
    new->re = capacity-1;
    new->size = 0;
    new->capacity = capacity;
    new->arr = (int *) malloc(sizeof(int) * capacity);
    return new;
}

//rtrn true if full
int isFull(struct node* queue)
{
    return queue->size == queue->capacity;
}
//push data to queue change rear
void enqueue(struct node* queue,int data)
{
    if (isFull(queue))
    {
        printf("is full\n");
        return;
    }
    queue->re = (queue->re +1) % queue->capacity;
    queue->arr[queue->re] = data;
    queue->size = queue->size + 1;
    printf("\nenqued:%d\n",queue->arr[queue->re]);
}

//rtrn true if queue empty
int isEmpty(struct node* queue)
{
    return queue->size == 0;
}

//reduce que, FIFO,change fr
int dequeue(struct node* queue)
{
    if (isEmpty(queue))
    {
        printf("is empty\n");
        return INT_MIN;
    }
    int data = queue->arr[queue->fr];
    queue->fr = (queue->fr +1) % queue->capacity;
    queue->size = queue->size -1;
    return data;
}

int main()
{
    struct node* queue = createQueue(10);

    enqueue(queue, 10);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 20);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 30);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 40);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 50);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 60);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 70);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 80);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 90);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 100);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 200);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 300);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 10);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 20);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 30);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 40);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
   
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    printf("dequeue %d\n",dequeue(queue));
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    
    printf("\n");
    
    for(int i = 0; i < queue->capacity; i++)
    {
        printf("%d ",queue->arr[i]);
    }
    printf("\n");
    enqueue(queue, 60);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 70);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 80);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 90);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    enqueue(queue, 100);
    printf("fr:%d re:%d size:%d capacity:%d\n",queue->fr,queue->re,queue->size,queue->capacity);
    
    for(int i = 0; i < queue->capacity; i++)
    {
        printf("%d ",queue->arr[i]);
    }
}
