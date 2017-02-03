#include <stdio.h>
int main()
{

     int *i, i_arr[5];
      char *ptr,c_arr[5], *ptr2;

       i = i_arr;
        printf("value of i is %u \n",i);
         i++;
          printf("value of i is %u \n",i);

           ptr = c_arr;
            printf("value of ptr is %u \n",ptr);
             ptr++;
              printf("value of ptr is %u \n",ptr);

               ptr2 = i_arr;
                printf("value of ptr is %u \n",ptr2);
                 ptr2++;
                  printf("value of ptr is %u \n",ptr2);
}
