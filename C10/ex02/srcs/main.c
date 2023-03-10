/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:37:30 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/10 13:38:41 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "../includes/ft_tail.h"


char	*ft_strstock(char *str, char *ptr)
{
	int		strlen;
	int		ptrlen;
	char	*newptr;
	int		i;
	int		j;

	strlen = ft_strlen(str);
	ptrlen = ft_strlen(ptr);
	i = -1;
	j = -1;
	newptr = malloc(sizeof(char) * (strlen + ptrlen + 1));
	if (!newptr)
		return (0);
	while (ptr && ptr[++i])
		newptr[i] = ptr[i];
	while (str && str[++j])
		newptr[i + j - 1] = str[j];
	newptr[i + j] = '\0';
	free(ptr); //probleme ici
	// ft_putstr("ok\n");
	return (newptr);
}

void	ft_printer(char *ptr, int offset)
{
	if (ft_strlen(ptr) < offset)
		ft_putstr(ptr);
	else
		ft_putstr(&ptr[ft_strlen(ptr) - offset]);
}

int	main(int argc, char **argv)
{
	t_taylor	var;

	if (argc != 4)
	{
		// return l'error en fonction
		return (1);	
	}
	if (ft_strcmp(argv[1], "-c"))
		return (1);
	var.offset = ft_atoi(argv[2]);
	var.ret = 1;
	var.fd = open(argv[3], O_RDONLY);
	var.ptr = malloc(sizeof(char) * (var.offset + 1));
	if (!var.ptr)
		return (1);
	while (var.ret)
	{
		var.ret = read(var.fd, var.ptr, var.offset);
		var.ptr[var.ret] = '\0';
		var.prev_ptr = ft_strstock(var.ptr, var.prev_ptr);
		if (!var.prev_ptr)
			return (1);
	}
	ft_printer(var.prev_ptr, var.offset);
	close(var.fd);
	free(var.ptr);
	free(var.prev_ptr);
	return (0);
}