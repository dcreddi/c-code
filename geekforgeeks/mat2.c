#include<stdio.h>


void swapRows(int *a,int *b,int size)
{
    for(int i=0;i<size;i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void transpose(int matrixRowSize,int matrixColSize,int matrix[matrixRowSize][matrixColSize])
{
        //TAKE TRANSPOSE
    for(int i=0; i<matrixRowSize-1; i++)
    {
        for(int j=i+1; j<matrixRowSize; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
void rotate(int matrixRowSize, int matrixColSize, int matrix[matrixRowSize][matrixColSize]) {
        
        //SWAP ROWS
    int start = 0;
    int end = matrixColSize-1;
//    transpose(matrixRowSize,matrixColSize,matrix);
    while(start<end)
    {
        swapRows(matrix[start],matrix[end],matrixRowSize);
        start++;
        end--;
    }
    //TAKE TRANSPOSE
    transpose(matrixRowSize,matrixColSize,matrix);
}

void print(int *arr, int nrow, int ncolumn )
      {
             //int (*arr)[ncolumn] = arr;
                for(int i = 0; i < nrow; i++)
           {
                      for(int j = 0; j < ncolumn; j++)
                     {          printf("[%d],[%d]:%d \t",i,j, *( arr + i*ncolumn + j ) );
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
    int matrix[4][4] =
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
    print( (int *)matrix, 4, 4);
    print( (int *)hello, 2, 3);
    rotate(2,3,hello);
    print( (int *)hello, 2, 3);
}

