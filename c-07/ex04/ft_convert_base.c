/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:37:36 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/15 19:57:10 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

char	*printnbrbase(int nbr, int i, char *base, int basesize)
{
	int				n;
	char			*tab;
	unsigned int	nbru;

	nbru = (unsigned int) nbr;
	if (nbr < 0)
	{
		tab = malloc(sizeof(char) * i++);
		tab[0] = '-';
		nbru = (unsigned int) -nbr;
	}
	else
		tab = malloc(sizeof(char) * i);
	n = 1;
	while (n <= i)
	{
		if (tab[i - n] != '-')
		{
			tab[i - n] = base[nbru % basesize];
			nbru = nbru / basesize;
		}
		n++;
	}
	return (tab);
}

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
		j = 0;
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

int	nbrlength(unsigned int i, int n)
{
	int	w;

	w = 0;
	while (i >= (unsigned int) n)
	{
		i = i / n;
		w++;
	}
	return (w + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				n;
	int				i;

	if (!testbase(base_from) || !testbase(base_to))
		return (0);
	i = ft_atoi_base(nbr, base_from);
	n = 0;
	while (base_to[n])
		n++;
	if (i < 0)
		return (printnbrbase(i, nbrlength((unsigned int) -i, n), base_to, n));
	else
		return (printnbrbase(i, nbrlength(i, n), base_to, n));
}
