/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:32:17 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/14 14:20:50 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_error(void)
{
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	return (errno);
}

void	ft_read_write(int *fd, int *eof)
{
	char	buffer[32];

	if (*fd == 0)
		while (read(0, buffer, 1))
			write(1, buffer, 1);
	else
	{
		while (*fd > 0 && *eof > 0 && *eof == 31)
		{
			*eof = read(*fd, buffer, 31);
			buffer[*eof] = '\0';
			write(1, buffer, *eof);
		}
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		eof;

	fd = -1;
	eof = 31;
	i = 0;
	if (argc < 2)
	{
		++fd;
		ft_read_write(&fd, &eof);
		return (0);
	}
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			return (ft_error());
		ft_read_write(&fd, &eof);
		if (eof < 0 && i + 1 == argc)
			return (ft_error());
		close(fd);
	}
	return (0);
}
