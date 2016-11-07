#include <stdio.h>

main ()

{
    int noncharc = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            ++noncharc;
           // printf("%d\n",noncharc);
            if (noncharc < 2)
                printf("\n");
        }
        else if (c != ' ' || c != '\t' || c != '\n')
        {
            putchar(c);
            noncharc = 0;
        }

    }
}
