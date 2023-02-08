/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsky.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:47:34 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/13 16:59:15 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	countline(t_tab *a, int line)
{
	int	i;
	int	count;
	int	mem;

	i = 0;
	mem = 0;
	count = 0;
	while (i < a->len)
	{
		if (mem < a->tab[line][i])
		{
			mem = a->tab[line][i];
			count++;
		}
		i++;
	}
	return (count);
}

int	countlinerev(t_tab *a, int line)
{
	int	i;
	int	count;
	int	mem;

	i = a->len - 1;
	mem = 0;
	count = 0;
	while (i >= 0)
	{
		if (mem < a->tab[line][i])
		{
			mem = a->tab[line][i];
			count++;
		}
		i--;
	}
	return (count);
}

int	countcol(t_tab *a, int col)
{
	int	i;
	int	count;
	int	mem;

	i = 0;
	mem = 0;
	count = 0;
	while (i < a->len)
	{
		if (mem < a->tab[i][col])
		{
			mem = a->tab[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int	countcolrev(t_tab *a, int col)
{
	int	i;
	int	count;
	int	mem;

	i = a->len - 1;
	mem = 0;
	count = 0;
	while (i >= 0)
	{
		if (mem < a->tab[i][col])
		{
			mem = a->tab[i][col];
			count++;
		}
		i--;
	}
	return (count);
}
