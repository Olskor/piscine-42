/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:46:19 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/16 15:55:04 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	long	size;
	char	c;

	size = 1;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nb *= -1;
		write(1, "-", 1);
	}
	while (nb / size > 9)
		size *= 10;
	while (size > 0)
	{
		c = '0' + ((nb / size) - (nb / (size * 10)) * 10);
		write(1, &c, 1);
		size /= 10;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *a)
{
	int	i;

	i = 0;
	while (a[i].str)
	{
		ft_putstr(a[i].str);
		ft_putstr("\n");
		ft_putnbr(a[i].size);
		ft_putstr("\n");
		ft_putstr(a[i].copy);
		ft_putstr("\n");
		i++;
	}
}
