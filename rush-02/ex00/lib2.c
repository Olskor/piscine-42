/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:37:47 by esuberbi          #+#    #+#             */
/*   Updated: 2022/11/20 23:13:39 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	superread(int dict, char *buffer, int BUFSIZE)
{
	int	i;

	i = read(dict, buffer, BUFSIZE);
	if (i == -1)
		return ((void) errorcode(207));
	while (i <= BUFSIZE)
	{
		buffer[i] = 0;
		i++;
	}
}

void	tatoucompris(t_dict *dict, t_dict *todel)
{
	while (dict)
	{
		todel = dict;
		dict = dict->next;
		free(todel->text);
		free(todel);
	}
}

int	ft_nbrismul(t_ull nbr)
{
	t_ull	n;

	n = 100;
	if (nbr < 100)
		return (nbr % 10);
	if (nbr == n)
		return (0);
	n *= 10;
	while (n <= 10000000000000000000ULL)
	{
		if (nbr == n)
			return (0);
		n *= 1000;
	}
	return (1);
}

t_dict	*testinternbr(t_dict *dict, t_dict *start, t_dict *prev, t_dict *todel)
{
	while (dict)
	{
		if (dict->nbr > 19 && ft_nbrismul(dict->nbr))
		{
			prev->next = dict->next;
			todel = dict;
			dict = dict->next;
			free(todel->text);
			free(todel);
			continue ;
		}
		prev = dict;
		dict = dict->next;
	}
	return (start);
}
