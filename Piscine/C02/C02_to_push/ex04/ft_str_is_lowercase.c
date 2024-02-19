/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:45:15 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/25 21:03:10 by sayilmaz         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
