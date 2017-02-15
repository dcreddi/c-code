#include <stdio.h>

int main ()
{
char  ch;
printf("input any one from a,z,c,u: ");
scanf("%c",&ch);
    switch(ch){
        case 'a':
            {
                printf("Hari\n");
                break;
            }
        case 'b':
            {
                printf("dharanee\n");
                break;
            }
        case 'c':
            {
                printf("sreenadh\n");
                break;
            }
        default:
            printf("default\n");
    }
}
