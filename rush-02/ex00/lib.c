/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:53:13 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/20 22:03:57 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_alpha_char(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strndup(char *str, unsigned int n)
{
	unsigned int		i;
	char				*ret;

	i = 0;
	while (str[i] && i < n)
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
