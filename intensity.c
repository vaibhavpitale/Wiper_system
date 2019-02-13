#include <stdio.h>
#include <stdlib.h>

void intensity(int inten)
{
    int i,j;
    switch(inten)
        {
            case 0 : printf("\nWiper is OFF\n");
                     break;

            case 1 : printf("\nWiper is at a slow speed\n");
                     for(i=0; i<5; i++)
                     {
                         for(j=0; j<999999999; j++);
                         if(kbhit())
                           break;
                         else
                          printf("*  ");
                     }
                     break;

            case 2 : printf("\nWiper is at a normal speed\n");
                     for(i=0; i<5; i++)
                     {
                         for(j=0; j<599999999; j++);
                         if(kbhit())
                           break;
                         else
                          printf("*  ");
                     }
                     break;

            case 3 : printf("\nWiper is at a fast speed\n");
                     for(i=0; i<5; i++)
                     {
                         for(j=0; j<99999999; j++);
                         if(kbhit())
                           break;
                         else
                          printf("*  ");
                     }
                     break;
        }
}
