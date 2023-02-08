/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:23:01 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/23 20:59:08 by jauffret         ###   ########.fr       */
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

void	ft_do_op(int a, int b, void (*arg)(int, int))
{
	arg(a, b);
}

void	fumouli(char **argv, int a, int b)
{
	if (ft_strlen(argv[2]) == 1)
	{
		if (argv[2][0] == '+')
			ft_do_op(a, b, &plus);
		if (argv[2][0] == '-')
			ft_do_op(a, b, &moins);
		if (argv[2][0] == '*')
			ft_do_op(a, b, &mul);
		if (argv[2][0] == '/')
			ft_do_op(a, b, &div);
		if (argv[2][0] == '%')
			ft_do_op(a, b, &mod);
		if (argv[2][0] != '+' && argv[2][0] != '-'
				&& argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
			ft_putstr("0\n");
	}
	else
		ft_putstr("0\n");
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		fumouli(argv, a, b);
	}
	return (0);
}
