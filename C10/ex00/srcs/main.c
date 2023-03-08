/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:32:17 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/08 11:02:19 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcnt.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

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

int main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buffer[32];
	int		eof;

	i = 1;
	fd = -1;
	oef = 1;
	if (argc == 1)
		return (ft_error(argc));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_error(fd))
	while (eof > 0)
	{
		oef = read(fd, buffer, sizeof(buffer));
		write(1, buffer, ft_strlen(buffer));
	}
	if (oef < 0)
		return (ft_error(eof));
	close(fd);
	return (0);
}
