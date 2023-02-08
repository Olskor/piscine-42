/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:17:44 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/13 23:30:34 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	countline(t_tab *a, int line);
int	countlinerev(t_tab *a, int line);
int	countcol(t_tab *a, int line);
int	countcolrev(t_tab *a, int line);

int	testsudoku(t_tab *a, int y, int x)
{
	int	n;
	int	i;

	if (a->tab[y][x] == 0)
		return (0);
	n = 0;
	i = a->tab[y][x];
	while (n < a->len)
	{
		if (i == a->tab[y][n] && n != x)
			return (0);
		n++;
	}
	n = 0;
	while (n < a->len)
	{
		if (i == a->tab[n][x] && n != y)
			return (0);
		n++;
	}
	return (1);
}

int	tabcmp(int **testtab, int **input, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			if (testtab[i][j] != input[i][j])
				return (0);
			j++;
		}
		free(testtab[i]);
		i++;
	}
	free(testtab);
	return (1);
}

int	testsky(t_tab *a, int **input)
{
	int	**testtab;
	int	i;
	int	j;

	testtab = malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		testtab[i] = malloc(sizeof(int) * a->len);
		j = 0;
		while (j < a->len)
		{
			if (i == 0)
				testtab[i][j] = countcol(a, j);
			if (i == 1)
				testtab[i][j] = countcolrev(a, j);
			if (i == 2)
				testtab[i][j] = countline(a, j);
			if (i == 3)
				testtab[i][j] = countlinerev(a, j);
			j++;
		}
		i++;
	}
	return (tabcmp(testtab, input, a->len));
}

int	testset(t_tab *a, int **input)
{
	int	x;
	int	y;

	y = 0;
	while (y < a->len)
	{
		x = 0;
		while (x < a->len)
		{
			if (!testsudoku(a, y, x))
				return (0);
			x++;
		}
		y++;
	}
	if (!testsky(a, input))
		return (0);
	return (1);
}
