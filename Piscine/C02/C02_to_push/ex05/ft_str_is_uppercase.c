/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:46:09 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/25 21:03:12 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
