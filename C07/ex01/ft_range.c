/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:30:52 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/02 08:55:50 by juliensilan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_lengh_calc(int min, int max)
{
	int	i;

	i = 0;
	while (min++ < max)
		i++;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (max <= min)
		return ((void *)0);
	i = 0;
	tab = malloc(sizeof(int) * ft_lengh_calc(min, max));
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
