/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 08:48:08 by esuberbi          #+#    #+#             */
/*   Updated: 2022/11/20 08:42:29 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BUFSIZE 10000

char	**ft_split(char *str, char charset, int i, int j);
int		is_alpha_char(char c);

char	*cleanstr(char *str, int spc_count, int i, int j)
{
	char	*ret;

	ret = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		while (str[i] == ' ')
		{
			spc_count++;
			i++;
		}
		if (str[i] >= 9 && str[i] <= 13)
			i++;
		if (is_alpha_char(str[i]) && str[i])
		{
			if (spc_count > 0)
			{
				spc_count = 0;
			}
			if (!(str[i] >= 9 && str[i] <= 13) && str[i] != ' ')
				ret[j++] = str[i++];
		}
	}
	free(str);
	return (ret);
}

t_dict	*createnewdict(char *nbr, char *str, t_dict *nextdict)
{
	t_dict	*newdict;
	t_ull	i;

	newdict = malloc(sizeof(t_dict));
	if (ft_atoll(nbr, &i, 0))
		return (0);
	newdict->nbr = i;
	newdict->text = cleanstr(str, 0, 0, 0);
	newdict->next = nextdict;
	return (newdict);
}

t_dict	*fill_struct(t_dict *dict, char *buffer, int i)
{
	char	**tab;
	t_dict	*head;

	tab = ft_split(buffer, ':', 0, 0);
	while (tab[i] && tab[i + 1])
	{
		dict = createnewdict(tab[i], tab[i + 1], dict);
		if (!dict)
			return (0);
		head = dict;
		i += 2;
	}
	return (head);
}

t_dict	*process_file(char *file_addr)
{
	char	buffer[BUFSIZE + 1];
	int		dict;
	t_dict	*file_proc;

	dict = open(file_addr, O_RDONLY);
	if (dict == -1)
	{
		errorcode(203);
		return (0);
	}
	superread(dict, buffer, BUFSIZE);
	file_proc = 0;
	file_proc = fill_struct(file_proc, buffer, 0);
	if (!file_proc)
	{
		errorcode(204);
		return (0);
	}
	close(dict);
	return (file_proc);
}
