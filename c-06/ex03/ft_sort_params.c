/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:44:21 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/09 20:25:04 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_sort_char_tab(char **tab, int size)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	while (i < size)
	{
		while (n < size - i)
		{
			if (ft_strcmp(tab[n], tab[n + 1]) > 0)
			{
				tab[0] = tab[n + 1];
				tab[n + 1] = tab[n];
				tab[n] = tab[0];
			}
			n++;
		}
		i++;
		n = 1;
	}
	return (tab);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	argv = ft_sort_char_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
