/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:19:08 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/03 09:44:44 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*newstr;
	int		i;

	i = 0;
	while (str && str[i])
		i++;
	newstr = malloc(sizeof(char) * (i + 1));
	if (!newstr)
		return ((void *)0);
	i = -1;
	while (str && str[++i])
		newstr[i] = str[i];
	newstr[i] = '\0';
	return (newstr);
}
