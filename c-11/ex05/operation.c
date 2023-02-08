/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:31:19 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/23 20:58:41 by jauffret         ###   ########.fr       */
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

void	plus(int a, int b)
{
	ft_putnbr(a + b);
	ft_putstr("\n");
}

void	moins(int a, int b)
{
	ft_putnbr(a - b);
	ft_putstr("\n");
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putstr("\n");
}

void	div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	ft_putnbr(a / b);
	ft_putstr("\n");
}

void	mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	ft_putnbr(a % b);
	ft_putstr("\n");
}
