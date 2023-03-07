/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:01:28 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/07 11:41:19 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int			i;
	long long	nb;
	int			neg;

	i = 0;
	nb = 0;
	neg = 0;
	if (!str)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i++] - '0';
	}
	if (!(neg % 2))
		return (nb);
	return (-nb);
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

void	ft_div_mod(char c, int nb1, int nb2)
{
	if (c == '/')
	{
		if (nb2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(nb1 / nb2);
	}
	else if (c == '%')
	{
		if (nb2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(nb1 % nb2);
	}
}

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	nb2 = 0;
	if (argc == 4 && argv[2])
	{
		nb1 = ft_atoi(argv[1]);
		nb2 = ft_atoi(argv[3]);
		if (argv[2][0] && argv[2][1])
			ft_putnbr(0);
		else if (argv[2][0] == '+')
			ft_putnbr(nb1 + nb2);
		else if (argv[2][0] == '-')
			ft_putnbr(nb1 - nb2);
		else if (argv[2][0] == '*')
			ft_putnbr(nb1 * nb2);
		else if (argv[2][0] == '/' || argv[2][0] == '%')
			ft_div_mod(argv[2][0], nb1, nb2);
		else
			ft_putnbr(0);
		write(1, "\n", 1);
	}
	return (0);
}
