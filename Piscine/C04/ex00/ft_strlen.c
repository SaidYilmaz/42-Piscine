/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:59:50 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/31 13:56:09 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
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

int	main(void)
{
	char	*s;

	s = "hello!";
	printf("%d", ft_strlen(s));
}
