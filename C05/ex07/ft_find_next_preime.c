/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_preime.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:00:49 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/01 12:16:40 by juliensilan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
	{
		nb += 2;
		if (nb < 2)
			return (2);
	}
	return (nb);
}
