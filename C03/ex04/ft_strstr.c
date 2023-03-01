/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:23:11 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/28 17:09:43 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str && str[i])
	{
		j = 0;
		while (str[i] && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (!to_find[j])
			return (&str[i - j]);
		i++;
	}
	return ((void *)0);
}
