/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:25:07 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/10 17:07:18 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;
	int		n;

	n = 0;
	i = 0;
	while (src[n])
		n++;
	str = malloc(sizeof(char) * (n + 1));
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = src[i];
	return (str);
}
