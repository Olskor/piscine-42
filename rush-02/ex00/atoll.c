/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:11:39 by nbrabant          #+#    #+#             */
/*   Updated: 2022/11/20 21:01:25 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_testulllimit(char *str)
{
	int		i;
	int		n;
	char	cmp[21];

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+')
		i++;
	n = 0;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && n < 21)
	{
		cmp[n] = str[i];
		i++;
		n++;
	}
	if (n < 20)
		return (0);
	if (ft_strcmp(MAX, cmp) < 0 || n > 20)
		return (errorcode(1));
	return (0);
}

int	isbackslashnishere(char *str, int ignorespace)
{
	int	i;

	i = 0;
	if (str[i] == '.')
		return (errorcode(5));
	while (str[i] && !ignorespace)
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoll(char *str, unsigned long long *nbr, int ignorespace)
{
	int	i;
	int	n;

	i = 0;
	*nbr = 0;
	if (ft_testulllimit(str))
		return (1);
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r') && ignorespace)
		i++;
	if (str[i] == '-')
		return (errorcode(2));
	if (str[i] == '+')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (errorcode(4));
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		*nbr = *nbr * 10 + (str[i] - '0');
		i++;
		n++;
	}
	return (isbackslashnishere(str + i, ignorespace));
}
