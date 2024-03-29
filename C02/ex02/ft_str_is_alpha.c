/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:04:04 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/23 18:22:30 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str && *str)
	{
		while (str && *str)
		{
			if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
				return (0);
			str++;
		}
	}
	return (1);
}
