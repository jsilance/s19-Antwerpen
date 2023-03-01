/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:08:36 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/01 17:03:55 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (dest && dest[i])
		i++;
	while (src && *src && nb-- > 0)
		dest[i++] = *src++;
	if (dest)
		dest[i] = '\0';
	return (dest);
}
