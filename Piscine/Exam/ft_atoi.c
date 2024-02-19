#include <unistd.h>

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] < 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
	char s[] = " 	  4214adfasf";
	printf("%d ", ft_atoi(s));	
}
