/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:08:17 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/16 16:00:13 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	kaunther;

	i = 0;
	kaunther = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			kaunther++;
			kaunther += ft_strlen(sep);
			j++;
		}
		i++;
	}
	return (kaunther);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*rslt;

	i = 0;
	rslt = malloc(sizeof(char) * ft_count(size, strs, sep));
	rslt[0] = 0;
	while (i < size)
	{
		ft_strcat(rslt, strs[i]);
		if (i != size - 1)
			ft_strcat(rslt, sep);
		i++;
	}
	return (rslt);
}
