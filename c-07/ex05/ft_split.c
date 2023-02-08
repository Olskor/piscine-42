/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:39:16 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/21 11:00:44 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	incharset(char c, char *charset)
{
	int	i;
	int	isin;

	i = 0;
	isin = 0;
	while (charset[i])
	{
		if (c == charset[i])
			isin = 1;
		i++;
	}
	return (isin);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *str, int n)
{
	int		i;
	char	*ret;

	i = 0;
	while (str[i])
		i++;
	ret = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && i < n)
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		i;
	int		j;
	int		space;

	ret = malloc(sizeof(char *) * (ft_strlen(str) / 2 + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		space = i;
		while (!incharset(str[i], charset) && str[i])
			i++;
		if (space != i)
		{
			ret[j] = ft_strncpy(str + space, i - space);
			j++;
		}
		if (str[i])
			i++;
	}
	ret[j] = 0;
	return (ret);
}
