/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:38:11 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/15 18:44:24 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

int	hex_chars_printer(char *ptr, int isvoid, int i)
{
	while (i < 16)
	{
		if (ptr && *ptr)
		{
			write(1, " ", 1);
			if (i == 8 || i == 0)
				write(1, " ", 1);
			if ((int)*ptr < 10)
				write(1, "0", 1);
			ft_putnbr_base((int)*ptr, "0123456789abcdef");
			ptr++;
			isvoid = 1;
		}
		else
		{
			if (i == 8)
				write(1, " ", 1);
			write(1, "   ", 3);
		}
		i++;
	}
	return (isvoid);
}

void	chars_printer(char *cpy, int isvoid)
{
	if (isvoid)
		write(1, "  |", 3);
	while (isvoid && cpy && *cpy)
	{
		if (*cpy < 32)
			write(1, ".", 1);
		else
			write(1, cpy, 1);
		cpy++;
	}
	if (isvoid)
		write(1, "|", 1);
}
