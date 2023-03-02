/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:19:08 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/02 11:18:24 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (src)
	{
		while (src && dest && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str++)
		i++;
	return (0);
}

char	*ft_strdup(char *str)
{
	char	*newstr;

	if (str)
		newstr = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!newstr)
		return ((void *)0);
	newstr = ft_strcpy(newstr, str);
	return (newstr);
}
