#include<stdio.h>

int n, x, l, array[50];
void Insert(){
    int i = n - 1;
    l = l - 1;
    while (l <= i && i >= 0 && l >= 0){
        array[i + 1] = array[i];
        i--;}array[l] = x;
n++;}

int main()
{
    printf("size of array: ");
    scanf("%d",&n);
    printf("elemets to be inserted in array:\n");
    int i;
    for(i =0; i < n; i++)
        scanf("%d",&array[i]);
    printf("array is: ");
    for (i = 0; i < n; i++)
    printf("%d ",array[i]);
    printf("\n new element and location to insert: ");
    scanf("%d",&x);
    scanf("%d",&l);
    Insert();
    printf("\nnew array is: ");
        for(i = 0; i < n ; i++)
            printf("%d ",array[i]);
}

