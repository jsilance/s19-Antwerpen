/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:03:23 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/15 18:47:41 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

char	*ft_strdup(char *str)
{
	char	*newstr;
	int		i;

	i = 0;
	while (str && str[i])
		i++;
	newstr = malloc(sizeof(char) * (i + 1));
	if (!newstr)
		return ((void *)0);
	i = -1;
	while (str && str[++i])
		newstr[i] = str[i];
	newstr[i] = '\0';
	return (newstr);
}

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_print_addr(int same, int ret)
{
	static int	i = 0;
	int			j;
	int			len;

	j = 7;
	len = i;
	while (len / 16 > 0)
	{
		len /= 16;
		j--;
	}
	if (i >= 160 && i < 256)
		j--;
	while (j-- > 0 && same == 0)
		write(1, "0", 1);
	if (same == 0)
		ft_putnbr_base(i, "0123456789abcdef");
	i += ret;
}
