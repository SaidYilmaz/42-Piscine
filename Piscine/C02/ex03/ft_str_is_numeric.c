/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:41:35 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/25 20:44:44 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != 0)
	{
		n++;
		str++;
	}
	return (n);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
		}
		else
		{
			r = 0;
		}
		i++;
	}
	return (r);
}

int	main(void)
{
	char v[] = "134134141";
	printf("%d\n", ft_str_is_numeric(v));
	char w[] = "12312asdas131";
	printf("%d\n", ft_str_is_numeric(w));
	char z[] = "";
	printf("%d\n", ft_str_is_numeric(z));
}