/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   beforestart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayilmaz <sayilmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:14:56 by sayilmaz          #+#    #+#             */
/*   Updated: 2023/07/23 21:22:40 by sayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		doyourstuff(int board[4][4], int *input);

void	ft_print(int board[4][4]);

void	fill_columns(int board[4][4], int col, int fill);

void	fill_rows(int board[4][4], int row, int fill);

void	lookfor4_1(int board[4][4], int *input, int pos)
{
	int	fill;

	fill = 0;
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
		{
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
		{
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		}
		pos++;
	}
}

void	lookfor4_0(int board[4][4], int *input)
{
	int	pos;

	pos = 0;
	while (input[pos] && pos < 8)
	{
		if (input[pos] == 4 && pos >= 0 && pos <= 3)
			fill_rows(board, pos, 0);
		if (input[pos] == 4 && pos >= 4 && pos <= 7)
			fill_columns(board, pos % 4, 4);
		pos++;
	}
	lookfor4_1(board, input, pos);
}

void	lookfor1(int board[4][4], int *input)
{
	int	pos;

	pos = 0;
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	lookfor4_0(board, input);
}

int	initboard(int *input)
{
	int		row;
	int		col;
	int		board[4][4];

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	lookfor1(board, input);
	if ((doyourstuff(board, input)) == 1)
		ft_print(board);
	else
		write(1, "\nError\n\n", 8);
	return (0);
}
