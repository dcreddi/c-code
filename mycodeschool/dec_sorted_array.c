#include<stdio.h>

int main ()
{
    printf("how many elements,: ");
    int i,j,temp,n, array[50];
    scanf("%d", &n);
    printf("\nenter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
   
    for (i = 0; i < n; i++)
        {
            for(j = i+1; j < n; j++)
            {
                if(array[i] < array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                } 
            }
        } printf("\n array is: ");
    for(i = 0; i < n; i++)
       printf("%d ",array[i]);
}
