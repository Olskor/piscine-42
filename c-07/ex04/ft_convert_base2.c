/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:38:33 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/15 19:34:18 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
