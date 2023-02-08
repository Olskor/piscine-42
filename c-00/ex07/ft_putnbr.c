/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:27:32 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/02 20:12:19 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_min(void)
{
	print_char('-');
	print_char('2');
	print_char('1');
	print_char('4');
	print_char('7');
	print_char('4');
	print_char('8');
	print_char('3');
	print_char('6');
	print_char('4');
	print_char('8');
}

int	correct(int nb)
{
	if (nb == 0)
	{
		print_char('0');
		return (nb);
	}
	if (nb == -2147483648)
	{
		print_min();
		return (0);
	}
	if (nb < 0)
	{
		nb = -nb;
		print_char('-');
		return (nb);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	div;
	int	test;

	div = 1000000000;
	test = 0;
	nb = correct(nb);
	while (div > 0)
	{
		if (((nb / div) % 10) != test)
		{
			print_char(((nb / div) % 10) + 48);
			test = 10;
		}
		div /= 10;
	}
}
