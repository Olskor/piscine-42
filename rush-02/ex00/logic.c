/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:36:40 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/20 23:21:19 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	printnbralphamin(t_dict *dict, t_ull nbr, t_dict *start);
int	printnbralphahundred(t_dict *dict, t_ull nbr, t_dict *start);

int	ft_countn(t_ull nbr, t_ull dictnbr)
{
	int	i;

	i = 0;
	while (nbr >= dictnbr && i <= 999999999)
	{
		nbr -= dictnbr;
		i++;
	}
	return (i);
}

int	printnbralpha(t_dict *dict, t_ull nbr, t_dict *start, int count)
{
	if (nbr < 1000)
		return (printnbralphahundred(dict, nbr, start));
	while (dict)
	{
		if (nbr >= dict->nbr)
		{
			count = ft_countn(nbr, dict->nbr);
			if (count > 999999999)
				return (errorcode(100));
			printnbralpha(dict, count, start, 0);
			ft_putstr(" ");
			ft_putstr(dict->text);
			if (nbr - (dict->nbr * count) > 0)
			{
				if (dict->nbr == 1000)
					ft_putstr(" and");
				ft_putstr(" ");
				printnbralpha(start, nbr - (dict->nbr
						* count), start, 0);
			}
			return (0);
		}
		dict = dict->next;
	}
	return (0);
}

int	printnbralphahundred(t_dict *dict, t_ull nbr, t_dict *start)
{
	if (nbr < 100)
		return (printnbralphamin(dict, nbr, start));
	while (dict)
	{
		if (nbr >= dict->nbr && nbr < 1000)
		{
			printnbralphamin(dict, ft_countn(nbr, dict->nbr), start);
			ft_putstr(" ");
			ft_putstr(dict->text);
			if (nbr - (dict->nbr * ft_countn(nbr, dict->nbr)) > 0)
			{
				ft_putstr(" ");
				printnbralpha(start, nbr - (dict->nbr
						* ft_countn(nbr, dict->nbr)), start, 0);
			}
			return (0);
		}
		dict = dict->next;
	}
	return (0);
}

int	printnbralphamin(t_dict *dict, t_ull nbr, t_dict *start)
{
	while (dict)
	{
		if (nbr >= dict->nbr && nbr < 100)
		{
			ft_putstr(dict->text);
			if (nbr - dict->nbr > 0)
			{
				ft_putstr("-");
				printnbralpha(start, nbr - dict->nbr, start, 0);
			}
			return (0);
		}
		if (nbr == dict->nbr && nbr < 20)
		{
			ft_putstr(dict->text);
			return (0);
		}
		dict = dict->next;
	}
	return (0);
}
