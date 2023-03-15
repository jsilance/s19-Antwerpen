/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:59:04 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/15 18:37:44 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

static void	ft_printer(char *ptr)
{
	int		isvoid;
	char	*cpy;

	isvoid = 0;
	cpy = ptr;
	if (ptr && *ptr)
		isvoid = hex_chars_printer(ptr, 0, 0);
	chars_printer(cpy, isvoid);
	write(1, "\n", 1);
}

static int	ft_error(int error)
{
	write(2, strerror(error), ft_strlen(strerror(error)));
	return (1);
}

static void	ft_hexd_init(t_hexd *var, char **argv)
{
	var->prev_ptr = (void *)0;
	var->ret = 1;
	var->fd = open(argv[2], O_RDONLY);
	var->ptr = malloc(sizeof(char) * (16 + 1));
	var->same = 0;
}

static void	main_comparator(t_hexd *var)
{
	if (ft_strcmp(var->ptr, var->prev_ptr))
	{
		var->same = 0;
		ft_print_addr(var->same, var->ret);
		ft_printer(var->ptr);
	}
	else if (var->same == 0)
	{
		write(1, "*\n", 2);
		var->same = 1;
		ft_print_addr(var->same, var->ret);
	}
	else
		ft_print_addr(var->same, var->ret);
}

int	main(int argc, char **argv)
{
	t_hexd	var;

	if (argc != 3 || ft_strcmp(argv[1], "-C"))
		return (1);
	ft_hexd_init(&var, argv);
	if (var.fd < 0)
		return (ft_error(errno));
	while (var.ret > 0)
	{
		free(var.prev_ptr);
		var.prev_ptr = ft_strdup(var.ptr);
		var.ret = read(var.fd, var.ptr, 16);
		if (var.ret < 0)
			return (ft_error(errno));
		var.ptr[var.ret] = '\0';
		if (!var.prev_ptr)
			break ;
		main_comparator(&var);
	}
	close(var.fd);
	free(var.ptr);
	free(var.prev_ptr);
	return (0);
}
