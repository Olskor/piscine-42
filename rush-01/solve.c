/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:44:27 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/13 23:33:25 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	testset(t_tab *a, int **input);

int	checkfirstcases(int x, int y, int **input, int size)
{
	if ((y == 0 && input[0][x] == 1) || (y == size - 1 && input[1][x] == 1))
		return (size);
	if ((x == 0 && input[2][y] == 1) || (x == size - 1 && input[3][y] == 1))
		return (size);
	if (input[0][x] == size)
		return (y + 1);
	if (input[1][x] == size)
		return (size - y);
	if (input[2][y] == size)
		return (x + 1);
	if (input[3][y] == size)
		return (size - x);
	if (input[0][x] + input[1][x] > size && y == input[0][x] - 1)
		return (size);
	if (input[2][y] + input[3][y] > size && x == input[2][y] - 1)
		return (size);
	return (0);
}

void	firstsetup(t_tab *a, int **input)
{
	int	y;
	int	x;

	y = 0;
	while (y < a->len)
	{
		x = 0;
		while (x < a->len)
		{
			a->tab[y][x] = checkfirstcases(x, y, input, a->len);
			x++;
		}
		y++;
	}
	return ;
}

void	ft_recursolve(t_tab *a, int **input, int x, int y)
{
	int	i;

	i = 1;
	if (y < a->len)
	{
		if (y < a->len && checkfirstcases(x, y, input, a->len) == 0)
		{
			while (i <= a->len && !testset(a, input))
			{
				a->tab[y][x] = i;
				if (x == a->len - 1)
					ft_recursolve(a, input, 0, y + 1);
				else
					ft_recursolve(a, input, x + 1, y);
				i++;
			}
		}
		if (x == a->len - 1)
			ft_recursolve(a, input, 0, y + 1);
		else
			ft_recursolve(a, input, x + 1, y);
	}
}

int	**ft_solve(int **input, int size)
{
	int		y;
	t_tab	*a;

	y = 0;
	a = malloc(sizeof(t_tab));
	a->len = size;
	a->tab = malloc(sizeof(int *) * size);
	while (y < size)
	{
		a->tab[y] = malloc(sizeof(int) * size);
		y++;
	}
	firstsetup(a, input);
	ft_recursolve(a, input, 0, 0);
	if (testset(a, input))
		output(a, input);
	else
	{
		errorcode(3);
		free2play(a, input);
	}
	return (a->tab);
}
