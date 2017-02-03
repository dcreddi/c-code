#include <stdio.h>

int main ()
{
    int flag = 0;
    char passwd[10];

    int *p; /* p is a pointer */
    p = &flag;
    printf("%d\n",p);
    *p = 1;
    printf("\n%d",flag);


}
