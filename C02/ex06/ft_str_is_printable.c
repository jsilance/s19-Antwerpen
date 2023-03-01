/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:52:13 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/24 12:27:48 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (str && *str)
	{
		while (str && *str)
		{
			if (!(*str >= 32 && *str <= 127))
				return (0);
			str++;
		}
	}
	return (1);
}
