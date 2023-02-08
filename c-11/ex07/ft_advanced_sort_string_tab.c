/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:27:03 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/24 13:27:15 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		n;
	char	*c;

	i = 0;
	n = 0;
	while (tab[i])
	{
		while (tab[n + 1])
		{
			if (cmp(tab[n], tab[n + 1]) > 0)
			{
				c = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = c;
			}
			n++;
		}
		i++;
		n = 0;
	}
}
