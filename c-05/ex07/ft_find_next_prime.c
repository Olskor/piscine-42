/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:34:46 by jauffret          #+#    #+#             */
/*   Updated: 2022/11/10 11:53:14 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(unsigned int nb)
{
	unsigned int	i;

	i = 2;
	while (nb % i != 0 && i < nb)
		i++;
	if (i == nb)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	if (nb < 2)
		nb = 2;
	i = (unsigned int) nb;
	while (i <= 2 * (unsigned int) nb)
	{
		if (i == 2147483647)
			return (i);
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
