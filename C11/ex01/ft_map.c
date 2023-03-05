/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:26:18 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/05 21:31:18 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	while (i < length && tab)
	{
		ptr[i] = tab[i];
		f(ptr[i++]);
	}
	return (ptr);
}
