#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int main()
{
	char str[] = "abcdefg";
	ft_rev_print(str);
	printf("\n%s ", str);
}