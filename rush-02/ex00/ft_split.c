/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:44:42 by esuberbi          #+#    #+#             */
/*   Updated: 2022/11/20 21:27:39 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	charsetswap(char charset)
{
	if (charset == ':')
		return ('\n');
	return (':');
}

char	**ft_split(char *str, char charset, int i, int j)
{
	char	**ret;
	int		space;

	ret = malloc(sizeof(char *) * (ft_strlen(str) / 2 + 1));
	while (str[i])
	{
		space = i;
		while (str[i] != charset && str[i])
			i++;
		charset = charsetswap(charset);
		if (space != i)
		{
			ret[j] = ft_strndup(str + space, i - space);
			j++;
		}
		if (str[i])
			i++;
	}
	ret[j] = 0;
	return (ret);
}
