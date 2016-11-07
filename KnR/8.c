#include <stdio.h>

int main(){
    int f, c = 0;
    printf("F\t\tC\n");
    for(f = 0;f <= 300; f=f+20)
    {
        c = ((5)*(f-32))/9;
        printf("%d\t\t%d\n",f,c);
    }
}
