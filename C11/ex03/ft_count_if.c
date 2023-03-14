/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:39:29 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/14 11:20:35 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int ( *f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab && tab[i] && i < length)
		if (f(tab[i++]))
			count++;
	return (count);
}
