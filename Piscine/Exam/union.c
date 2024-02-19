/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:11:35 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/08/03 20:02:55 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double_1(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int is_double_0(char *str, char c, int pos)
{
	int  i;

	i = 0;
	
	while(i < pos)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void ft_union( char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i])
	{
		if (is_double_0(str1, str1[i], i))
			write(1, &str1[i], 1);
		i++;
	}

	i = 0;
	while(str2[i])
	{
		if (is_double_1(str2[i], str1))
			if (is_double_0(str2, str2[i], i))
				write(1, &str2[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);	
}