/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:06:07 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/05 22:23:33 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEX "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printaddress(unsigned long long addr, int i)
{
	if (i > 1)
		printaddress(addr / 16, i - 1);
	ft_putchar(HEX[addr % 16]);
}

void	printthex(char *c, int i)
{
	int				n;
	unsigned char	*text;

	text = (unsigned char *) c;
	n = 0;
	while (n < i)
	{
		ft_putchar(HEX[(text[n]) / 16]);
		ft_putchar(HEX[(text[n]) % 16]);
		if (n % 2 == 1)
			ft_putchar(' ');
		n++;
	}
	if (i < 16)
	{
		i = i + 16 - i;
		while (n < i)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			if (n % 2 == 1)
				ft_putchar(' ');
			n++;
		}
	}
}

void	printtext(char *text, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		if (text[n] < 32)
			ft_putchar('.');
		else
			ft_putchar(text[n]);
		n++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	unsigned long long	adr;
	char				*text;
	int					test;

	test = 16;
	text = (char *) addr;
	adr = (unsigned long long) addr;
	i = 0;
	while (i < size)
	{	
		if (i + 16 > size)
			test = size % 16;
		printaddress(adr, 16);
		ft_putchar(':');
		ft_putchar(' ');
		printthex(text, test);
		printtext(text, test);
		i = i + 16;
		adr = adr + 16;
		text = text + 16;
		ft_putchar('\n');
	}
	return (addr);
}
