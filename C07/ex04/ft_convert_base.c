/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:08:33 by jusilanc          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/03/03 13:29:38 by jusilanc         ###   ########.fr       */
=======
/*   Updated: 2023/03/04 12:18:19 by juliensilan      ###   ########.fr       */
>>>>>>> 3a60c6a90e41227febd86ad930ff73f80c4cc554
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str++)
		i++;
	return (i);
}

int	ft_strchr(char *str, char c, char **ptr, int param)
{
	char	tmp;
	int		i[2];
	char	*pptr;

	i[0] = 0;
	if (!param)
	{
		while (str && str[i[0]])
		{
			if (str[i[0]] == c)
				return (i[0]);
			i[0]++;
		}
		return (-1);
	}
	pptr = *ptr;
	i[1] = ft_strlen(pptr);
	while (i[0] < i[1]--)
	{
		tmp = pptr[i[0]];
		pptr[i[0]++] = pptr[i[1]];
		pptr[i[1]] = tmp;
	}
	return (0);
}

int	ft_chek_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str || !*str)
		return (1);
	if (ft_strchr(str, '-', (void *)0, 0) >= 0)
		return (1);
	else if (ft_strchr(str, '+', (void *)0, 0) >= 0)
		return (1);
	while (str && str[j])
		while (str && str[i])
			if (ft_strchr(&str[++j], str[i++], (void *)0, 0) >= 0)
				return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	base_len[2];

	nb = 0;
	base_len[1] = 0;
	base_len[0] = ft_strlen(base);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			base_len[1]++;
	while (str && *str)
	{
		if (ft_strchr(base, *str, (void *)0, 0) < 0)
			break ;
		nb *= base_len[0];
		nb += ft_strchr(base, *str++, (void *)0, 0);
	}
	if (base_len[1] % 2)
		return (-nb);
	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	nb[3];
	char		*ptr;

	if (ft_chek_char(base_to) || ft_chek_char(base_from) || !nbr || !*nbr)
		return (malloc(0));
	nb[1] = 0;
	nb[0] = ft_atoi_base(nbr, base_from);
	nb[2] = 0;
	ptr = malloc(sizeof(char) * 33);
	if (nb[0] < 0)
		nb[2] = 1;
	if (nb[0] < 0)
		nb[0] = -nb[0];
	else if (nb[0] == 0)
		ptr[nb[1]++] = base_to[0];
	while (nb[0])
	{
		ptr[nb[1]++] = base_to[nb[0] % ft_strlen(base_to)];
		nb[0] /= ft_strlen(base_to);
	}
	if (nb[2])
		ptr[nb[1]++] = '-';
	ptr[nb[1]] = '\0';
	ft_strchr((void *)0, 0, &ptr, 1);
	return (ptr);
}
#include <stdio.h>
int main()
{
	char *ptr = ft_convert_base("00", "0123456789", "0123456");
	printf("[%s]\n", ptr);
	free(ptr);
}
