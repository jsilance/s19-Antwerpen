/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:31:42 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/01 00:34:09 by juliensilan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb <= 0)
		return (0);
	while (--nb > 0)
		i *= nb;
	return (i);
}
