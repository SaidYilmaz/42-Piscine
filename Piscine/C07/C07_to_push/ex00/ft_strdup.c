#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_strcopy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

char *ft_strdup(char *str)
{
    char *dest;

    dest = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
    if(dest == NULL)
        return(0);
    return(ft_strcopy(dest, str));
}
