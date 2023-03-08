/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:32:17 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/08 13:20:36 by jusilanc         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	int		fd;
	char	buffer[32];
	int		i;
	int		eof;

	fd = -1;
	eof = 31;
	i = 0;
	if (argc < 2)
	 	return (ft_error());
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			return (ft_error());
		while (fd > 0 && eof > 0 && eof == 31)
		{
			eof = read(fd, buffer, 31);
			buffer[eof] = '\0';
			write(1, buffer, ft_strlen(buffer));
		}
		if (eof < 0)
			return (ft_error());
		close(fd);
	}
	return (0);
}
