#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *dest;
    int i;

    if(min >= max)
        return(0);
    dest = (int *)malloc((max - min + 1) * sizeof(int));
    i = 0;
    while(i < max - min)
    {
        dest[i] = min + i;
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

int ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
        *range = 0;
        return(0);
    *range = ft_range(min, max);
    if (*range == NULL)
        return(-1);
    return(max - min);
}
