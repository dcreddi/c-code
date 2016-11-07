#include<stdio.h>
int main(){

    int array[50], n, a;
    printf("no. of elements in array: ");
    scanf("%d",&n);
    int i;
    for(i = 0; i < n; i++){
        printf("\nelement to be inserted: ");
        scanf("%d", &array[i]);}
        printf("array is: ");
        for(i = 0; i < n; i++){
        printf("%d ",array[i]);}
    }

