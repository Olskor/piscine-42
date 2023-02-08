/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:58:34 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/06 12:00:08 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	i = 0;
	if (size == 0)
		return (c);
	while (i < (size - 1) && str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}
