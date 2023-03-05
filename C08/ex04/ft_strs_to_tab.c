/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:32:52 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/05 20:22:29 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int			i;

	i = 0;
	ptr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	if (ac > 0 && av)
	{
		while (i < ac && av && *av)
		{
			ptr[i].str = *av;
			ptr[i].copy = ft_strdup(*av);
			if (!ptr[i].str)
				return (NULL);
			ptr[i++].size = ft_strlen(*av);
			av++;
		}
		ptr[i].str = 0;
	}
	return (ptr);
}
