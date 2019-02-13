#include <stdio.h>
#include <stdlib.h>

void intensity(int inten);

void wiper()
{
    int c, n, i;
    for (c=0; c<5; c++)
        n = rand()%4;
    intensity(n);
}
