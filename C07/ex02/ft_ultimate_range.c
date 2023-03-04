/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:37:42 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/04 11:34:06 by juliensilan      ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	ret;
	int	*tab;

	ret = 0;
	*range = (void *)0;
	if (max <= min)
		return (ret);
	i = 0;
	ret = ft_lengh_calc(min, max);
	tab = (int *)malloc(sizeof(int) * ret);
	if (!tab)
	{
		*range = (void *)0;
		return (-1);
	}
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (ret);
}
