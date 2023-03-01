/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:19:50 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/01 00:33:40 by juliensilan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	if (nb < 1)
		return (0);
	return (nb);
}
