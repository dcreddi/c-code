#include<stdio.h>

int main ()
{
    int n;
    printf("enter size of array: "); //array size
    scanf("%d",&n);
    int arr[n];
    printf("\nenter elements for array: "); //array elements
    int i,j,t;
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (i = 0; i < n; i++)
            {
                for(j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
    printf("\n duplicates are: ");
    for (i = 0; i < n; i++) //find duplicates
    {
        if (arr[i] == arr[i+1])
            printf("%d",arr[i]);
    }
}
