/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:56:43 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/20 20:59:14 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char	*str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*s;

	s = "helloworld!";
	ft_putstr(s);
}
