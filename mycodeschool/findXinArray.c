#include<stdio.h>

int find(int arr[], int n, int x)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main ()
{
    int t, arr[100], n, x, i;
    //test cases
    scanf("%d",&t);
    while (t--)
    {
        //array size
        scanf("%d",&n);
        //array
        for(i = 0; i < n; i++)
            scanf("%d",&arr[i]);
        //search x
        scanf("%d",&x);
        //print i
        printf("%d\n",find(arr, n, x));
    }
}




