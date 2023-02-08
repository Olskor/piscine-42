/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:41:27 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/03 15:00:51 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c += '0';
	write(1, &c, 1);
}

void	ft_putnbrn(unsigned int n, int c)
{
	if (c <= 1)
		ft_putchar(n % 10);
	else
	{
		ft_putnbrn(n / 10, c - 1);
		ft_putchar(n % 10);
	}
}

int	comma(int nb, int c)
{
	int	i;

	i = 1;
	while (c > 0)
	{
		if (nb % 10 != 10 - i)
			return (0);
		nb /= 10;
		c--;
		i++;
	}
	return (1);
}

void	ft_print_combn2(int nb, unsigned int res, int compt, int c)
{
	int	k;

	k = nb + 1;
	if (compt < 1)
	{
		ft_putnbrn(res, c);
		if (!comma(res, c))
			write(1, ", ", 2);
	}
	else
	{
		while (k < 10)
		{
			ft_print_combn2(k, res * 10 + k, compt - 1, c);
			k++;
		}
	}
}

void	ft_print_combn(int c)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_print_combn2(i, i, c - 1, c);
		i++;
	}
}
