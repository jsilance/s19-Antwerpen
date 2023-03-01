/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:07:40 by jusilanc          #+#    #+#             */
/*   Updated: 2023/02/24 11:21:30 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_power(int nb, int e)
{
	int	res;

	res = 1;
	while (e-- > 0)
		res *= nb;
	return (res);
}

int	ft_greater(int n)
{
	int	last;

	last = n % 10;
	n /= 10;
	while (n)
	{
		if (last <= n % 10)
			return (0);
		last = n % 10;
		n /= 10;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	long long	n;
	char		c[10];
	int			i;

	n = nb;
	i = 9;
	if (n < 0)
		n *= -1;
	while (i >= 0)
		c[i--] = '\0';
	i = 9;
	while (n)
	{
		c[i--] = '0' + (n % 10);
		n /= 10;
	}
	if (nb < 0)
		write(1, "-", 1);
	while (i < 10)
		write(1, &c[i++], 1);
}

void	ft_base(int n, int real)
{
	int		i;
	int		j;
	int		first;

	first = 0;
	i = ft_power(10, n);
	j = i / 10;
	while (j < i)
	{
		if (ft_greater(j))
		{
			if (first > 0)
				write(1, ", ", 2);
			if (real > n)
				write(1, "0", 1);
			ft_putnbr(j);
			first = 1;
		}
		j++;
	}
}

void	ft_print_combn(int n)
{
	ft_base(n - 1, n);
	ft_base(n, n);
}
