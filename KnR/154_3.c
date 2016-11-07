#include<stdio.h>

main()
{	double nc,c,nl;
	nc = c = nl = 0;
	for (nc = 0;(c =  getchar()) != EOF; ++nc)
	{
		
	if (c == '\n')
		++nl;
	}
	printf("no. of lines %.0f\n",nl);
}
