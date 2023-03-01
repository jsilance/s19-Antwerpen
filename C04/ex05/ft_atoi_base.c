/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:26:26 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/01 14:47:33 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_chek_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strchr(str, '-') >= 0)
		return (1);
	else if (ft_strchr(str, '+') >= 0)
		return (1);
	while (str && str[j])
		while (str && str[i])
			if (ft_strchr(&str[++j], str[i++]) >= 0)
				return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && *str++)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	base_len[2];

	nb = 0;
	base_len[1] = 0;
	base_len[0] = ft_strlen(base);
	if (!str)
		return (0);
	if (ft_chek_char(base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			base_len[1]++;
	while (str && *str)
	{
		if (ft_strchr(base, *str) < 0)
			break ;
		nb *= base_len[0];
		nb += ft_strchr(base, *str++);
	}
	if (base_len[1] % 2)
		return (-nb);
	return (nb);
}
