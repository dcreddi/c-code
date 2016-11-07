#include<stdio.h>

main()
{
    double c, ws;
    c = ws = 0;
    while((c=getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++ws;
            if ( ws < 2)
            {
                putchar(c);
            }
        }
        else 
            putchar(c);
    }
}
