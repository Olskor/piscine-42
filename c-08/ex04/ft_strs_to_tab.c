/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:15:10 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/16 21:04:07 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *av)
{
	int		i;
	char	*c;

	c = malloc(sizeof(char) * (ft_strlen(av) + 1));
	if (!c)
		return (0);
	i = 0;
	while (av[i])
	{
		c[i] = av[i];
		i++;
	}
	c[i] = 0;
	return (c);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			i;

	a = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!a)
		return (0);
	i = 0;
	while (i < ac)
	{
		a[i].size = ft_strlen(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strcpy(av[i]);
		i++;
	}
	a[i].str = 0;
	return (a);
}
