#include<stdio.h>

main()
{
	float c, f;
	f = 0;
	printf(" Fahr to Celsius table\n");
	while (f <= 300)
	{
	c = (5.0/9.0) * (f - 32.0);
	printf ("f %6.0f\tc %3.2f\n",f,c);
	f = f +20;
	}
	return 0;
}
