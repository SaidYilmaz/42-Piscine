/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:02:40 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/20 21:08:32 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	num_of_swaps;

	i = 0;
	num_of_swaps = size / 2;
	while (i < num_of_swaps)
	{
		ft_swap(&(tab[i]), &(tab[size - i - 1]));
		i++;
	}
}

int	main(void)
{
	int	v[10];
	int	i;

	i = 0;
	while (i <= 9)
	{
		v[i] = i + 42;
		i++;
	}
	printf("Before \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", v[i]);
	}
	ft_rev_int_tab(v, 10);
	printf("\nAfter \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", v[i]);
	}
}
