/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:22:35 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/07 13:46:02 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str++)
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long long	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb <= 9)
		ft_putchar('0' + nb);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par)
	{
		write(1, par->str, ft_strlen(par->str));
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		write(1, par->copy, ft_strlen(par->copy));
		write(1, "\n", 1);
		if (!par->str)
			break ;
		par++;
	}
}
