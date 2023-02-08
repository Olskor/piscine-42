/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:07:01 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/24 13:38:45 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[n], tab[n + 1]) > 0)
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
