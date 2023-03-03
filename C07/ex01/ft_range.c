/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:30:52 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/03 09:42:26 by jusilanc         ###   ########.fr       */
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
	if (!tab)
		return ((void *)0);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
