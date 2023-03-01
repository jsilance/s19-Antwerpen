/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:01:21 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/24 11:00:42 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_printer(int a)
{
	char	c;

	if (a < 10)
	{
		c = '0';
		write(1, &c, 1);
		c += a;
		write(1, &c, 1);
	}
	else
	{
		c = '0' + (a / 10);
		write(1, &c, 1);
		c = '0' + a % 10;
		write(1, &c, 1);
	}
}

static void	ft_sorter_printer(int a, int b, int first)
{
	if (first)
		write(1, ", ", 2);
	ft_printer(b);
	write(1, " ", 1);
	ft_printer(a);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	first;

	a = 0;
	b = 0;
	first = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			if (b > a)
			{
				ft_sorter_printer(b, a, first);
				first = 1;
			}
			b++;
		}
		a++;
		b = 0;
	}
}
