/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:37:42 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/03 13:24:38 by jusilanc         ###   ########.fr       */
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

	*range = NULL;
	if (max <= min)
		return (0);
	i = 0;
	ret = ft_lengh_calc(min, max);
	tab = (int *)malloc(sizeof(int) * ret);
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (ret);
}
