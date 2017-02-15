#include <stdio.h>

int main()
{   
    int l, n ; 
    printf("\n length of string: ");
    scanf("%d",&l);

    printf("\nenter charecters : ");
    char s[l], *p;
    for (n = 0; n < l; n++)
    {
        scanf("%s",&s[n]);
    }
    p = s;
    p = p+n;
    
    printf("After reversing string: ");
    int i = 0;
    for ( i = l; i >= 0; i--)
    {
        printf("%c",*p--); 
    }
}
