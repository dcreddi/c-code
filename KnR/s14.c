#include<stdio.h>

main()

{
	float c, f;
	f = 300;
	printf("Farh\tCelsius\n");
	for( int i = 0; f >= 0; ++i)
	{
		printf("%3.0f\t%.2f\n",f,c = ((5.0)/(9.0))*(f-32.0));
		f = f - 20;
	}
}
