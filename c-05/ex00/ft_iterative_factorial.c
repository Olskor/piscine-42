/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:40:25 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/08 20:46:44 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rslt;

	rslt = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		rslt *= nb;
		nb--;
	}
	return (rslt);
}
