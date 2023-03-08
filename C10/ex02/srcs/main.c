/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:37:30 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/09 00:29:57 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int	ft_strcmp(char *s1, char *s2)
{
	if (!s1)
		return (1);
	if (!s2)
		return (-1);
	while (s1 && s2)
	{
		if (!*s1 || !*s2 || (*(s1) != *(s2)))
		{
			if (*s1 > *s2)
				return (*s1 - *s2);
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_atoi(char *str)
{
	int			i;
	long long	nb;
	int			neg;

	i = 0;
	nb = 0;
	neg = 0;
	if (!str)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i++] - '0';
	}
	if (!(neg % 2))
		return (nb);
	return (-nb);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	main(int argc, char **argv)
{
	int		offset;
	char	*ptr;
	char	*prev_ptr;
	int		fd;
	int		ret;

	if (argc != 4)
	{
		// return l'error en fonction
		return (1);	
	}
	if (ft_strcmp(argv[1], "-c"))
		return (1);
	prev_ptr = 0;
	offset = ft_atoi(argv[2]);
	ret = 1;
	fd = open(argv[3], O_RDONLY);
	while (ret)
	{
		ptr = malloc(sizeof(char) * (offset + 1));
		ret = read(fd, ptr, offset);
		ptr[ret] = '\0';
		if (ret < offset)
		{
			ft_putstr(&prev_ptr[ft_strlen(prev_ptr) - ft_strlen(ptr)]);
			ft_putstr(ptr);
		}
		free(prev_ptr);
		prev_ptr = ptr;
	}
	return (0);
}
