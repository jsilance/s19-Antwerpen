/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:26:18 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/14 17:56:08 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int ( *f)(int))
{
	int	i;
	int	*ptr;

	i = -1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	while (++i < length && tab)
		ptr[i] = f(tab[i]);
	return (ptr);
}
