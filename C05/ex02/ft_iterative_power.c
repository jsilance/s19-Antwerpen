/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:35:28 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/01 00:51:30 by juliensilan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power > 0)
		i *= nb;
	return (i);
}

#include <stdio.h>
int main(void)
{
	int a = ft_iterative_power(-5, 0);
	printf("a = %d\n", a);
	return (0);
}
