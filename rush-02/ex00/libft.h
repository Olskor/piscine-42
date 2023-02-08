/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:07:55 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/20 22:38:57 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define MAX "18446744073709551615"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

typedef unsigned long long	t_ull;

typedef struct s_dict		t_dict;

typedef struct s_dict
{
	unsigned long long		nbr;
	char					*text;
	t_dict					*next;
}	t_dict;

int		ft_atoll(char *str, unsigned long long *i, int ignorespace);
void	ft_putstr(char *str);
int		errorcode(int code);
char	*ft_strndup(char *src, unsigned int n);
int		ft_strlen(char *str);
t_dict	*process_file(char *file_addr);
int		printnbralpha(t_dict *dict, t_ull nbr, t_dict *start, int count);
void	ft_putnbr(int nb);
int		ft_testulllimit(char *str);
void	superread(int dict, char *buffer, int BUFSIZE);

#endif
