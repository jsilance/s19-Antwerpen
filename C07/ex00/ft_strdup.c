/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:19:08 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/02 07:29:21 by juliensilan      ###   ########.fr       */
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
	newstr = ft_strcpy(newstr, str);
	return (newstr);
}
