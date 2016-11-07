#include<stdio.h>

int array[50], l, n; //array,location,size

void Delete(){
   int  i = n-1;
    l = l-1;
    while(l < i && l >=0 && i >=0){
        array[l] = array[l+1];
        i--;} n--;}

int main()
{
    printf("size of arraay LIMIT is 50: ");
    scanf("%d",&n);
    printf("enter elements to be inserted:\n");
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
    printf("array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\nenter position of the element to be removed\nstarting from left and first element position is 1: ");
    scanf("%d",&l);
    Delete();
    printf("new array is: ");
    for(i = 0; i < n; i++)
        printf("%d ",array[i]);
    }
