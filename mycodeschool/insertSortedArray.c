#include<stdio.h>

void insert_sorted();
int array[50];
int size;
int item;

int main(){
    int i = 0;
    printf("\n Size of array: ");
    scanf("%d",&size);
    for (i = 0; i < size; i++){
        scanf("%d",array[i]);

