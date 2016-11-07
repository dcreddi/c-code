#include<stdio.h>
int numbers[50], size, element;

void insert_sorted(){
    int i = size - 1;
    while (element < numbers[i] && i>= 0){
        numbers[i+1] = numbers[i];
        i--;} numbers[i+1] = element;
    size++;
}


int main(){
    int i = 0;
    printf("size of array : ");
    scanf("%d",&size);
    printf("enter the sorted numbers: \n");
    for(i = 0; i < size; i++){
        scanf("%d",&numbers[i]);}
    printf("enter the new element: ");
        scanf("%d",&element);
        insert_sorted();
        printf("\nAfter insertion new array is : ");
        for (i =0; i < size; i++)
            printf("%d ",numbers[i]);
    return 0;
}
