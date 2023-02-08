/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:42:52 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/03 11:37:09 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write (1, &c, 1);
}

void	print(int a, int b)
{
	print_char(((b / 10) % 10) + 48);
	print_char((b % 10) + 48);
	print_char(' ');
	print_char(((a / 10) % 10) + 48);
	print_char((a % 10) + 48);
	if (a == 99 && b == 98)
		return ;
	else
	{	
		print_char(',');
		print_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			print(b, a);
			b++;
		}
		a++;
	}
}
