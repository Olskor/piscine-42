/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgiraudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:31:59 by vgiraudo          #+#    #+#             */
/*   Updated: 2022/11/13 23:31:02 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	**ft_solve(int **input, int size);

int	testinput(int count)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		if (count == i * 4)
			return (i);
		i++;
	}
	return (0);
}

int	takenbr(char *arg, int nbr)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			nbr--;
		if (nbr == -1)
			return (arg[i] - '0');
		i++;
	}
	return (0);
}

int	setinput(char *arg, int size)
{
	int	i;
	int	j;
	int	**input;

	i = 0;
	input = malloc(sizeof(int *) * 4);
	if (!input)
		return (2);
	while (i < 4)
	{
		j = 0;
		input[i] = malloc(sizeof(int) * size);
		if (!input[i])
			return (2);
		while (j < size)
		{
			input[i][j] = takenbr(arg, j + i * size);
			if (input[i][j] > size)
				return (3);
			j++;
		}
		i++;
	}
	ft_solve(input, size);
	return (0);
}

int	mii_music(char *arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '9' && i % 2 == 0)
			count++;
		if (arg[i] == ' ' && i % 2 == 0)
			return (1);
		if (arg[i] >= '1' && arg[i] <= '9' && i % 2 == 1)
			return (1);
		if ((arg[i] < '1' || arg[i] > '9') && arg[i] != ' ')
			return (1);
		i++;
	}
	if (testinput(count))
		setinput(arg, testinput(count));
	else
		return (2);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (mii_music(argv[1]))
			errorcode(!mii_music(argv[1]));
	}
	else
		errorcode(0);
	return (0);
}
