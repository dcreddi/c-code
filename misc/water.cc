#include<stdio.h>

int readInput()
{
    char in[ 100 ];
    int m = 0;

    do {
        printf("Minutes: ");
        fgets( in, 100, stdin );
        int rval = sscanf( in, "%d", &m );
        if ( rval == 0 ) {
            printf( "   Entered wrong integer, try again \n" );
        }  
        else {
            printf("got integer\n");
            break;
        }
    } while ( 1 );
    printf("Bottles: %d\n",(m*12));
}

int main()
{
    int rval , m = 0;
    readInput();
    return 1;
   do
   {
        printf("Minutes: ");
        int rval = scanf( "%d", &m);
        printf( "scanf returned: %d \n", rval );
        if ( rval == 0 ) {
            printf( "   Entered wrong integer, try again \n" );
            while( getchar() != '\n' );
        }  
        else {
            printf("got integer\n");
            break;
        }
   }while(1);
    printf("Bottles: %d\n",(m*12));
}
