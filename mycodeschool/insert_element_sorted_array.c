#include<stdio.h>

int n, x, array[50];
void Insert(){
    int i= n - 1;
    while(x < array[i] && i >= 0){
        array[i+1] = array[i];
        i--;}array[i+1] = x;
    n++;}


int main()
{
    printf("size of array: ");
    scanf("%d",&n);
    printf("enter elements in sorted ascending order: \n");
    int i;
    for (i = 0; i < n; i++)
        scanf("%d",&array[i]);
    printf("\narray is: ");
    for (i = 0; i < n; i++)
        printf("%d ",array[i]);
    printf("\nenter new element to be inserted in sorted array: ");
    scanf("%d",&x);
    Insert();
    printf("\n new array: ");
    for( i = 0; i < n; i++)
        printf("%d ",array[i]);
}

