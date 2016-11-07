#include<stdio.h>

int main()
{
    int i,sum, step = 0;
    int A[] = {10,20,30,40,50};
    for(i = 0; i < 5; i++)
    {  
        sum+= A[i];
        step++;
        printf("i=%d,step=%d,A%d\n",i,step,A[i]);
    }
        printf("sum:%d\n",sum);
}
