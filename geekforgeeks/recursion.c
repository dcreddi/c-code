#include<stdio.h>

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int x;
    printf("enter number to calculate factorial: ");
    scanf("%d",&x);
    printf("fact of %d: is  %d\n",x, fact(x));
}
