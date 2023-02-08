/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:54:19 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/05 22:19:06 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEX "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printhex(unsigned char c)
{
	ft_putchar('\\');
	ft_putchar(HEX[(c) / 16]);
	ft_putchar(HEX[(c) % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*c;

	c = (unsigned char *) str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			printhex(c[i]);
		else
			ft_putchar(c[i]);
		i++;
	}
}
