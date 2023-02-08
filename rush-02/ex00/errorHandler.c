/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorHandler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:19:14 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/20 23:13:51 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printerror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
}

int	errorcodee(int code)
{
	if (code == 203)
		printerror("dictionnaire introuvable : ");
	if (code == 204)
		printerror("Erreur de Lecture : ");
	if (code == 205)
		printerror("Erreur Dict\n");
	if (code == 206)
		printerror("Erreur Dict - Str Value\n");
	if (code == 207)
		printerror("Erreur fichier est un repertoire : ");
	if (code == 101)
		printerror("Erreur Arg\n");
	if (code == 5)
		printerror("Erreur, seul entiers autorises : ");
	return (1);
}

int	errorcode(int code)
{
	if (code == 1)
		printerror("Erreur, nombre trop grand : ");
	if (code == 2)
		printerror("Erreur, nombre doit etre positif : ");
	if (code == 3)
	{
		printerror("Erreur, nombres d'arguments incorrect");
		printerror(". seul 1 ou 2 arguments autorises\n");
		printerror("eg: \"<dictfile>\" \"125\"\n");
	}
	if (code == 4)
		printerror("Erreur, nombre saisi incorrect : ");
	if (code == 200)
		printerror("Erreur, format dictionnaire incorrect : ");
	if (code == 201)
		printerror("Erreur, memoire : ");
	if (code == 202)
		printerror("Erreur, char non imprimable dans dict : ");
	if (code == 100)
	{
		printerror("Erreur, nombre trop grand pour le");
		printerror(" dictionnaire selectione : ");
	}
	errorcodee(code);
	return (1);
}
