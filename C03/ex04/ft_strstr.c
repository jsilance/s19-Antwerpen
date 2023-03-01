/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:23:11 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/01 19:24:38 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find || !*to_find)
		return (str);
	while (str && str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			if (!to_find[j++])
				return (&str[i]);
		i++;
	}
	return ((void *)0);
}
