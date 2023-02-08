/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:41:22 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/08 22:37:35 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	testbase(char *base)
{
	int	n;
	int	j;

	n = 0;
	j = 0;
	while (base[n])
	{
		if (base[n] == '+' || base[n] == '-')
			return (0);
		if (base[n] == ' ' || base[n] == '\n' || base[n] == '\t'
			|| base[n] == '\v' || base[n] == '\f' || base[n] == '\r')
			return (0);
		while (base[j])
		{
			if (base[n] == base[j] && n != j)
				return (0);
			j++;
		}
		n++;
	}
	if (n < 2)
		return (0);
	return (1);
}

int	inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i])
		i++;
	if (!base[i])
		return (-1);
	return (i);
}

int	basesize(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int				i;
	int				sig;
	unsigned int	nbr;

	i = 0;
	sig = 1;
	nbr = 0;
	if (!testbase(base))
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sig *= -1;
		str++;
	}
	while (inbase(str[i], base) != -1)
	{
		nbr = (nbr * basesize(base)) + inbase(str[i], base);
		i++;
	}
	return (nbr * sig);
}
