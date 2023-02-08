/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:37:08 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/03 21:56:58 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	n;

	i = 0;
	n = 0;
	while (i < size - 1)
	{
		while (n < size - i - 1)
		{
			if (tab[n] > tab[n + 1])
				ft_swap(tab + n, tab + n + 1);
			n++;
		}
		i++;
		n = 0;
	}
}
