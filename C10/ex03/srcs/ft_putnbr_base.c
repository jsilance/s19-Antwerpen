/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:16:28 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/14 15:48:57 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static char	*ft_strchr(char *str, char to_find)
{
	int	i;

	i = 1;
	while (str && str[i])
		if (str[i++] == to_find)
			return (&str[--i]);
	return ((void *)0);
}

static int	ft_chek_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strchr(str, '-'))
		return (1);
	else if (ft_strchr(str, '+'))
		return (1);
	while (str && str[j])
		while (str && str[i])
			if (ft_strchr(&str[++j], str[i++]))
				return (1);
	return (0);
}

static long long	ft_strlen(char *str)
{
	long long	i;

	i = 0;
	while (str && *str++)
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb;

	nb = nbr;
	if (!base || !*base || ft_chek_char(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		nb %= ft_strlen(base);
	}
	if (nb < ft_strlen(base))
		ft_putchar(*(base + nb));
}
