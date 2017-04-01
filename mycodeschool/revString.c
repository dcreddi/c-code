#include<stdio.h>

int main()
{
    char s[] = "hello";
    int i = 0;
     char *p = s;
    while(*p != '\0')
    {
     // p =  p + sizeof(char);
       p++;
        printf("%d ", i++);
    }

   /* while (s[i] != '\0')
    {
        i++;
    }*/
    printf("\nlength %d",i);
    printf("\n%c",s[5]);
}

