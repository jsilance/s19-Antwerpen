/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:21:17 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/01 12:24:11 by juliensilan      ###   ########.fr       */
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
	write(1, argv[0], ft_strlen(argv[0]));
}
