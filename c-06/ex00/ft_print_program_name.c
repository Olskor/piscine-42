/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:10:59 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/09 18:39:29 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	c = '\n';
	i = 0;
	while (argv[0][i] && argc)
		i++;
	if (argc)
		write(1, &argv[0][0], i);
	write(1, &c, 1);
	return (0);
}
