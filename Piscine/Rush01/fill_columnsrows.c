/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_columnsrows.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:26:39 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/26 20:36:42 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_columns(int board[4][4], int col, int fill)
{
	while (fill > 0)
	{
		board[4 - fill][col] = fill;
		fill--;
	}
}

void	fill_rows(int board[4][4], int row, int fill)
{
	while (fill < 4)
	{
		board[row][fill] = fill + 1;
		fill++;
	}
}
