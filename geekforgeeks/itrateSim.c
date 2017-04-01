#include<stdio.h>

int sum(int x){
    int total = 0;
    while(x > 0){
        total += x;
        x--;
    }
    return total;
}

int main (){
    int x;
    printf("enter x: ");
    scanf("%d",&x);
    printf("sum is: %d\n",sum(x));
}
