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

int main(void)
{
    int *test;
    int i;
    
    i = 0;
    test = ft_range(2,1);
    while(i < 0)
    {
        printf("%d ", test[i]);
        i++;
    }
}