#include <iostream>

using namespace std;

int** rotation(int row, int col,int** mat){

    int temp1,temp2,temp3,rw=0,cw=0;

    while((row-rw)>1 && (col-cw)>1){

        temp1 = mat[rw][col-1];

        for(int k=col-1;k>cw;k--){

            mat[rw][k] = mat[rw][k-1];

        }

        temp2 = mat[row-1][col-1];

        for(int k=row-1;k>rw+1;k--){

            mat[k][col-1]=mat[k-1][col-1];

        }

        mat[rw+1][col-1]=temp1;

        temp3 = mat[row-1][cw];

        for(int k=cw;k<col-2;k++)
        { 
                mat[row-1][k]=mat[row-1][k+1];
                    }
            mat[row-1][col-2]=temp2;
                for(int k=rw;k<row-2;k++)
                        {mat[k][cw]=mat[k+1][cw];}
                    mat[row-2][cw]=temp3;
                        rw++; cw++; row--; col--; }
        return mat; }

        int main()
{
            int row, col, **mat;
                    while(1){cin>>row>>col;
                                

                        mat = new int*[row];

                        for(int i=0;i<row;i++)
                        { mat[i] = new int[col];
                        }
                        for(int i=0;i<row;i++)
                        { for(int j=0;j<col;j++)
                            {cin>>mat[i][j];

                            }

                        }

                        mat=rotation(row,col,mat);

                        for(int i=0;i<row;i++)
                        { for(int j=0;j<col;j++)
                            { cout<<mat[i][j]; }
                            cout<<endl;}
                    } }
