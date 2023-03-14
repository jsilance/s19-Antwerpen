/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:44:07 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/14 19:21:20 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int ( *f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1 && tab)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			up++;
		if (f(tab[i], tab[i + 1]) <= 0)
			down++;
		i++;
	}
	if (i == up || i == down)
		return (1);
	return (0);
}
