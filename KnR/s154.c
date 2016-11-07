#include<stdio.h>

main()
{   int c;
    double nc, nl, sw, nw;
    sw = 1;
    nc = nl = nw = 0;
    while ((c = getchar()) != EOF)
            {
            ++nc;
            if (c == '\n')
            ++nl;
            if (c == ' ' || c == '\t' || c == '\n')
            sw = 1;//start word
            else if (sw == 1)
            {
            sw = 0;//make sw false so that it doesnot count one more time
            ++nw;
            }
            }
    printf("nc:%.0f,nl:%.0f,nw:%.0f\n",nc,nl,nw);
 }


