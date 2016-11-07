#include<stdio.h>

main ()
{	
	int c = 0;
	while ( getchar() != EOF)
	{
		++c;
	}
	printf("number of charecters %d\n",c);
}
