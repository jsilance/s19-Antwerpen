/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:32:17 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/15 13:26:18 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_error(int argc)
{
	if (argc < 0)
		write(2, "Cannot read file.\n", 18);
	else if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[32];
	int		eof;

	fd = -1;
	eof = 31;
	if (argc != 2)
		return (ft_error(argc));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_error(fd));
	while (read(fd, buffer, 32))
		write(1, buffer, 32);
	write(1, "\n", 1);
	close(fd);
	return (0);
}
