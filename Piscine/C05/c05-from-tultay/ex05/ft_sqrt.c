/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgozpina <tgozpina@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:27:27 by tgozpina          #+#    #+#             */
/*   Updated: 2023/07/30 21:27:30 by tgozpina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}