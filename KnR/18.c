#include<stdio.h>

main()
{
	double c, nc, l, t, ws;
	nc = l = t = ws = 0;
	while ((c = getchar()) != EOF)
	{
	if (c == ' ')
	++ws;
	if (c == '\t')
	++t;
	if (c == '\n')
	++l;
	} printf("blanks:%.0f, tabs:%.0f, newlines:%.0f\n",ws,t,l); 
}
