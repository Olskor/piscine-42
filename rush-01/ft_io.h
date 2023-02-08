/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:48:33 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/13 23:07:42 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_tab
{
	int	**tab;
	int	len;
}	t_tab;

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	errorcode(int code);
void	output(t_tab *a, int **input);
void	free2play(t_tab *a, int **input);

#endif
