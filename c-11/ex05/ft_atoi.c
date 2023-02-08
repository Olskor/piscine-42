/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:40:51 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/23 20:58:40 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
void	plus(int a, int b);
void	moins(int a, int b);
void	mul(int a, int b);
void	div(int a, int b);
void	mod(int a, int b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_atoi(char *str)
{
	int				i;
	int				sig;
	unsigned int	nbr;

	i = 0;
	sig = 1;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sig);
}
