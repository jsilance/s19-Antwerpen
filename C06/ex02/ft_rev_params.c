/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:35:20 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/01 19:41:28 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str++)
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	while (1 <= --argc)
	{
		write(1, argv[argc], ft_strlen(argv[argc]));
		if (1 < argc)
			write(1, "\n", 1);
	}
	return (0);
}
