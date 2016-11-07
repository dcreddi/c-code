#include<stdio.h>

int main()
{
    int n, i, j, temp, array[50];
    printf("\nsize of array, Limit is 50:");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
        for(i = 0; i < n; i++)
        {
            for(j = i+1; j < n; j++)
            {
                if(array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
        }
    }
    printf("\nsorted array: ");
        for(i = 0; i < n; i++){
        printf("%d ",array[i]);} 
}


