/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:33:53 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/07 11:48:19 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int ( *f)(char*))
{
	int	i;

	i = 0;
	while (tab && tab[i])
	{
		if (f(tab[i++]))
			return (1);
	}
	return (0);
}
