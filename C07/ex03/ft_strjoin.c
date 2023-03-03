/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:41:35 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/03 09:32:57 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str++)
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	int		i[3];
	char	*ptr;

	i[2] = 0;
	i[0] = 0;
	if (size < 1 || !str || !*str)
		return (malloc(0));
	while (i[0] < size)
		i[2] += ft_strlen(str[i[0]++]);
	ptr = malloc(sizeof(char) * i[2] + ((size - 1) * ft_strlen(sep)) + 1);
	if (!ptr)
		return ((void *)0);
	i[0] = -1;
	i[2] = 0;
	while (++i[0] < size)
	{
		i[1] = 0;
		while (i[1] < ft_strlen(str[i[0]]))
			ptr[i[2]++] = str[i[0]][i[1]++];
		i[1] = 0;
		while (i[1] < ft_strlen(sep) && i[0] + 1 < size)
			ptr[i[2]++] = sep[i[1]++];
		ptr[i[2]] = '\0';
	}
	return (ptr);
}
