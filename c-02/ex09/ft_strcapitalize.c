/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 08:59:47 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/05 09:42:19 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	isalphanum(char c)
{
	if (c < 'a' || c > 'z')
		if (c < 'A' || c > 'Z')
			if (c < '0' || c > '9')
				return (0);
	return (1);
}

char	capitalize(char c)
{
	if (c < 'a' || c > 'z')
		return (c);
	return (c - 32);
}

char	lowerize(char c)
{
	if (c < 'A' || c > 'Z')
		return (c);
	return (c + 32);
}

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = ' ';
	while (str[i] != '\0')
	{
		if (isalphanum(str[i]) != isalphanum(c))
		{
			str[i] = capitalize(str[i]);
		}
		else
		{
			str[i] = lowerize(str[i]);
		}
		c = str[i];
		i++;
	}
	return (str);
}
