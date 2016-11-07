#include <stdio.h>

int array [50], x, n;

void DeleteNumber(){
    int i = n - 1;
    while (i >= 0  && x != array[i]){
        i--;}     // find location to be deleted
    while(i < n ){
        array[i] = array[i+1]; // start from position to delete and shift elemets to lefet
        i++;} n--;
}

int main(){
    printf("size of array Limit is 50: ");
    scanf("%d",&n);
    printf("\nenter elements to be inserted in array:\n");
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
    printf("\narray is:");
    for(i = 0; i < n; i++)
        printf("%d ",array[i]);
    printf("\nenter specific number to be removed from array:");
    scanf("%d",&x);
    DeleteNumber();
    printf("\nnew array after deletion is.... ");
    for (i = 0; i < n; i++)
        printf("%d ",array[i]);
}

