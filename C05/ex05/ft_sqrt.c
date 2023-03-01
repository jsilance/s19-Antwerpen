/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:26:13 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/01 16:11:33 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = nb % 10;
	if (i == 2 || i == 3 ||	i == 7 || i == 8 || nb < 1)
		return (0);
	i = 1;
	while (i <= nb / 2 || nb == 1)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
