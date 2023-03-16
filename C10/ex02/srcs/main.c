/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:37:30 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/16 16:35:10 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

static char	*ft_strstock(char *str, char *ptr)
{
	int		strlen;
	int		ptrlen;
	char	*newptr;
	int		i;
	int		j;

	strlen = ft_strlen(str);
	ptrlen = ft_strlen(ptr);
	i = 0;
	j = 0;
	newptr = malloc(sizeof(char) * (strlen + ptrlen + 1));
	if (!newptr)
		return ((void *)0);
	while (ptr && ptr[i])
	{
		newptr[i] = ptr[i];
		i++;
	}
	free(ptr);
	while (str && str[j])
		newptr[i++] = str[j++];
	newptr[i] = '\0';
	return (newptr);
}

static void	ft_printer(char *ptr, int offset)
{
	(void)offset;
	if (ft_strlen(ptr) <= offset)
		ft_putstr(ptr);
	else
		ft_putstr(&ptr[ft_strlen(ptr) - offset]);
}

static int	ft_error(int error)
{
	write(2, strerror(error), ft_strlen(strerror(error)));
	return (1);
}

static void	ft_taylor_init(t_taylor *var, char **argv, int argc)
{
	var->prev_ptr = (void *)0;
	var->ret = 1;
	var->offset = ft_atoi(argv[2]);
	if (argc == 4)
		var->fd = open(argv[3], O_RDONLY);
	else
		var->fd = 0;
}

int	main(int argc, char **argv)
{
	t_taylor	var;

	if (argc < 3 || argc > 4 || ft_strcmp(argv[1], "-c"))
		return (1);
	ft_taylor_init(&var, argv, argc);
	if (var.fd < 0)
		return (ft_error(errno));
	var.ptr = malloc(sizeof(char) * (var.offset * 2 + 1));
	if (!var.ptr)
		return (1);
	while (var.ret > 0)
	{
		var.ret = read(var.fd, var.ptr, var.offset * 2);
		if (var.ret < 0)
			return (ft_error(errno));
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
