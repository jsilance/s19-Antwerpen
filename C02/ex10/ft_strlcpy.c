/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:55:50 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/26 22:37:45 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (!dest)
		while (src && *src)
			i++;
	while (dest && src && *src && --size > 0)
	{
		*dest++ = *src++;
		*dest = '\0';
		i++;
	}
	return (++i);
}
