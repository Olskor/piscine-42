/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:42:38 by nbrabant          #+#    #+#             */
/*   Updated: 2022/11/20 22:39:31 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dict	*testinternbr(t_dict *dict, t_dict *start, t_dict *prev, t_dict *todel);
void	tatoucompris(t_dict *dict, t_dict *todel);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_dictswap(t_dict *a, t_dict *b)
{
	t_dict	c;

	c = *a;
	a->nbr = b->nbr;
	a->text = b->text;
	b->nbr = c.nbr;
	b->text = c.text;
}

t_dict	*sortrevdict(t_dict *dict)
{
	t_dict	*start;
	t_dict	*dictcmp;

	start = dict;
	while (dict)
	{
		dictcmp = start;
		while (dictcmp)
		{
			if (dictcmp->nbr < dict->nbr)
			{
				ft_dictswap(dictcmp, dict);
			}
			dictcmp = dictcmp->next;
		}
		dict = dict->next;
	}
	return (start);
}

int	output(int argc, char **argv, t_ull i, char *input)
{
	t_dict	*dict;

	dict = 0;
	if (argc > 1)
		if (ft_atoll(input, &i, 1))
			return (errorcode(101));
	if (argc == 3)
		dict = process_file(argv[1]);
	else
		dict = process_file("numbers.dict");
	if (!dict)
		return (errorcode(205));
	dict = testinternbr(dict, dict, dict, dict);
	sortrevdict(dict);
	if (printnbralpha(dict, i, dict, 0))
		return (errorcode(205));
	ft_putstr("\n");
	tatoucompris(dict, dict);
	return (0);
}

int	main(int argc, char **argv)
{
	unsigned long long	i;
	char				input[10];

	if (argc > 3)
		return (errorcode(3));
	i = 0;
	if (argc == 1)
	{
		while (read(0, input, 1000))
		{
			output(2, argv, i, input);
		}
	}
	else
		return (output(argc, argv, i, argv[argc - 1]));
	return (0);
}
