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

int main(void)
{
    char *text[5];
    char *sep;
    char *result;

	text[0] = "Bu";
	text[1] = "bir";
	text[2] = "memory";
	text[3] = "allocation";
	text[4] = "egzersizidir.";
    sep = "---";
    result = ft_strjoin(5, text, sep);

	printf("%s\n", result);
}