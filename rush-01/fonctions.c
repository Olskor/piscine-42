/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:11:16 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/13 22:52:24 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define DEC "0123456789"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nbr, int i)
{
	if (i > 1)
		ft_printnbr(nbr / 10, i - 1);
	ft_putchar(DEC[nbr % 10]);
}

void	ft_putnbr(int nbr)
{
	int	n;
	int	i;

	n = nbr;
	i = 0;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	ft_printnbr(nbr, i + 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
