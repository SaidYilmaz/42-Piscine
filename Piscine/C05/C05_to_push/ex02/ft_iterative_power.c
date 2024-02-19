/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:17:42 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/08/01 14:23:12 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	result = 1;
	i = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
