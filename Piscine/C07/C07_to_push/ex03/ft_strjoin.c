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

char *ft_strjoin(int size, char **str, char *sep)
{
    char *result;
    int len;
    int i;
    int j;
    int index;

    len = 0;
    i = 0;
    while(i < size)
    {
        len += ft_strlen(str[i]);
        i++;
    }
    len += (size - 1) * ft_strlen(sep);
    result = (char *)malloc((len + 1) * sizeof(char));
    index = 0;
    i = 0;
    while(index < len)
    {
        j = 0;
        while(str[i][j])
        {
            result[index] = str[i][j];
            index++;
            j++;
        }
        i++;
        if(i != size)
        {
            j = 0;
            while(sep[j])
            {
                result[index] = sep[j];
                index++;
                j++;
            }
        }
    }
    result[index] = '\0';
    return(result);
}
