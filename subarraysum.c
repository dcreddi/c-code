#include <stdio.h>

int firstindex,tailindex = 0;
int Maxsubarray(int array[], int n)
{
    int currsum,sum,i,tempindex  = 0;
    for (i = 0; i < n; i++) //over array
    {
        currsum = currsum + array[i];
        if (currsum <  0)
        {
            currsum = 0;
           tempindex = i+1;
        }
        else if (currsum > sum)
        {
            sum = currsum;
            firstindex = tempindex;
            tailindex = i;
        }
    }
    return sum;
}


int main ()
{
    printf ("Program to calculate maximum sub array of negative and non-negative numbers\n enter number of elements or size of array: ");
   int n;
    scanf("%d",&n); //size n
    printf("\n");
    int array[n];
    printf("enter array elements\n");
    int i;

    //form array of size n
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
    printf("array is: ");
    for(i = 0; i < n; i++)
        printf("%d ",array[i]);
    printf("\n");

    printf("max sum is: %d",Maxsubarray(array,n));
    printf("\nsub array is:");
    for (i = firstindex ; i <= tailindex; i++)
        printf("%d ", array[i]);

}
