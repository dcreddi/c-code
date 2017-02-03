#include<stdio.h>
#include<stdlib.h>

void incr(int (&i)){
    i = i++;
}

int main()
{
    int i  = 1;
    incr(i);
    printf("%d\n",i);
}
