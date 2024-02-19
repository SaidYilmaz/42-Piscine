/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:46:09 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/25 20:46:38 by sayilmaz         ###   ########.fr       */
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

int	main(void)
{
	char v[] = "ASFASFASFAFA";
	printf("%d\n", ft_str_is_uppercase(v));

	char w[] = "fsasfASFASFAFasfasfa";
	printf("%d\n", ft_str_is_uppercase(w));

	char z[] = "";
	printf("%d\n", ft_str_is_uppercase(z));
}
