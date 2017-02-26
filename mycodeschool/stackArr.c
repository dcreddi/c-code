#include<stdio.h>
#include<stdlib.h>

void push(int x,int *top,int a[])
{
    *top = *top+1;

    a[*top] = x;
}

int  pop(int *top, int a[])
{
    *top = *top-1;
    return a[*top];
}

//int peek

void print(int a[],int **top)
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    int s = 101;
    int a[s];
    int *top;
    for (int i = 0; i < (s/4); i++)
    {
        a[i] = (i*10);
        *top = &a[i];
    }

    print(a,&top);
 //   push(250,&top,a);
   // print(a,top);
   // pop(&top,a);
    //top(&top);
    //print(a,top);
    

}
