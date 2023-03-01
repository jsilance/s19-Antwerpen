/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 02:47:27 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/28 16:56:02 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest && dest[i])
		i++;
	while (dest && src && *src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
