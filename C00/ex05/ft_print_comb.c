/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:57:05 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/24 09:17:14 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_pnumbers(int n)
{
	char	c;

	c = '0';
	c += n;
	write(1, &c, 1);
}

static void	ft_printer(int a, int b, int c)
{
	char	*str;

	str = ", ";
	ft_pnumbers(a);
	ft_pnumbers(b);
	ft_pnumbers(c);
	if (!(a == 7 && b == 8 && c == 9))
		write(1, str, 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				if (a < b && b < c)
					ft_printer(a, b, c);
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}
