/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:15:38 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/20 21:19:49 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size - i)
		{
			if (tab[i] > tab[i + j])
			{
				ft_swap(&(tab[i]), &(tab[i + j]));
			}
			j++;
		}
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
		v[i] = rand() % 1001 - 500;
		i++;
	}
	printf("Before \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", v[i]);
	}
	ft_sort_int_tab(v, 10);
	printf("\nAfter sorting\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", v[i]);
	}
}
