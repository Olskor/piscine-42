/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:43:14 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/11 10:26:44 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*rslt;

	i = 0;
	if (min >= max)
	{
		return (0);
		rslt = 0;
	}
	rslt = malloc(sizeof(int) * (max - min));
	if (!rslt)
		return (-1);
	while (min < max)
	{
		rslt[i] = min;
		i++;
		min++;
	}
	*range = rslt;
	return (i);
}
