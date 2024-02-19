/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:56:43 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/31 13:56:16 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
