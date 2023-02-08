/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:31:43 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/02 16:49:13 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	show(int a, int b, int c)
{
	ft_printchar(c + 48);
	ft_printchar(b + 48);
	ft_printchar(a + 48);
	if (c < 7)
	{
		ft_printchar(',');
		ft_printchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	b;
	int	a;

	c = 0;
	while (c < 10)
	{
		b = c + 1;
		while (b < 10)
		{
			a = b + 1;
			while (a < 10)
			{
				show(a, b, c);
				a++;
			}
			b++;
		}
		c++;
	}
}
