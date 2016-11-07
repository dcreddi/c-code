#include<stdio.h>

main()
{	double nc;
	for (nc = 0;  getchar() != EOF; ++nc)
	;
	printf("no. of chars %.0f\n",nc);
}
