/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiraudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:22:11 by vgiraudo          #+#    #+#             */
/*   Updated: 2022/11/13 23:07:57 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	free2play(t_tab *a, int **input)
{
	int	i;

	i = 0;
	while (i < a->len)
	{
		free(a->tab[i]);
		if (i < 4)
			free(input[i]);
		i++;
	}
	free(a->tab);
	free(input);
	free(a);
}

void	output(t_tab *a, int **input)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < a->len)
	{
		i = 0;
		while (i < a->len)
		{
			if (i != 0)
				ft_putstr(" ");
			ft_putnbr(a->tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	free2play(a, input);
}
