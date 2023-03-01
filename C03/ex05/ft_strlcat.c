/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:46:11 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/28 14:29:29 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str++)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dstlen;
	unsigned int	srclen;

	i = -1;
	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (!size)
		return (srclen);
	while (src && src[++i] && dstlen + i < size - 1)
		dest[dstlen + i] = src[i];
	dest[dstlen + i] = '\0';
	if (dstlen > size)
		return (srclen + size);
	return (srclen + dstlen);
}
