#include<stdio.h>


void rotateAntiClock(int m, int n, int arr[m][n])
{

    for (int i = 0; i < n/2; i++)
    {
        for (int j = i; j < (n - i - 1); j++)
        {
            int t = arr[i][j];
            arr[i][j] = arr[j][n-i-1];
            arr[j][n-i-1] = arr[n-i-1][n-j-1];
            arr[n-i-1][n-j-1] = arr[n-j-1][i];
            arr[n-j-1][i] = t;
        }
    }
}


void print(int *arr, int nrow, int ncolumn )
{
//    int (*arr)[ncolumn] = arr;
    for(int i = 0; i < nrow; i++)
    {
        for(int j = 0; j < ncolumn; j++)
        {
            printf("[%d],[%d]:%d \t",i,j, *( arr + i*ncolumn + j ) );
           // printf("[%d],[%d]:%d \t",i,j, marr[i][j] );
        }
        printf("\n");
    }
        printf("\n");
}

            
int main()
{
    int n = 4;
    int m = 4;
    int arr[][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int k = 2;
    int hello[k][ k+1];
    hello[0][0] = 1;
    hello[0][1] = 2;
    hello[0][2] = 3;
    hello[1][0] = 4;
    hello[1][1] = 5;
    hello[1][2] = 6;

    // print(arr, 4, 4);
    print( (int *)arr, 4, 4);
    print( (int *)hello, 2, 3);
    rotateAntiClock(m,n,arr);
    print( (int *)arr, m, n);

}

