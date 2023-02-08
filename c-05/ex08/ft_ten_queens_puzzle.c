/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:44:27 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/09 18:28:02 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define DEC "0123456789"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	testpos(int cases[10], int x, int y)
{
	int	i;

	i = 0;
	if (x == 0 && y == 0)
		return (1);
	while (i < 10)
	{
		if (x + y == i + cases[i])
			return (0);
		if (x - y == i - cases[i])
			return (0);
		if (y == cases[i])
			return (0);
		i++;
	}
	return (1);
}

void	tenqueenrecur(int cases[10], int nbr, int *solutions)
{
	int	i;

	if (nbr == 10)
	{
		i = 0;
		while (i < 10)
		{
			ft_putchar(cases[i++] + '0');
		}
		ft_putchar('\n');
		(*solutions)++;
		return ;
	}
	i = -1;
	while (i++ < 9)
	{
		if (!testpos(cases, nbr, i))
			continue ;
		cases[nbr] = i;
		tenqueenrecur(cases, nbr + 1, solutions);
		cases[nbr] = -1000;
	}	
}

int	ft_ten_queens_puzzle(void)
{
	int	y;
	int	solutions;
	int	cases[10];

	y = 0;
	while (y < 10)
	{
		cases[y] = -1000;
		y++;
	}
	solutions = 0;
	cases[0] = 0;
	tenqueenrecur(cases, 0, &solutions);
	return (solutions);
}
