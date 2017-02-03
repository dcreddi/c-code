#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int *p;
    p = (int*)malloc(sizeof(int));
    
    char *c;
    c = (char*)malloc(sizeof(char));

    printf("%d\n",p);
    printf("%d",c);
}
