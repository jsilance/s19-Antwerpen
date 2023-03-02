/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:26:42 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/02 23:13:22 by juliensilan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find || !*to_find)
		return (str);
	while (str && str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			if (!to_find[++j])
				return (&str[i]);
		i++;
	}
	return ((void *)0);
}

int	ft_strchr(char *str, char c)
{
	int		i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strndup(char *str, int nb)
{
	char	*newstr;
	int		i;

	if (str)
		newstr = malloc(sizeof(char) * (nb + 1));
	if (!newstr)
		return ((void *)0);
	i = -1;
	while (str && str[++i] && nb-- > 0)
		newstr[i] = str[i];
	newstr[i] = '\0';
	return (newstr);
}

int	ft_word_counter(char *str, char *charset)
{
	int	word;

	word = 0;
	while (str && *str)
	{
		if (ft_strchr(charset, *str) > -1)
			str++;
		else
		{
			while (*str && ft_strchr(charset, *str) == -1)
				str++;
			word++;
		}
	}
	return (word);
}

char	*ft_start_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str && *str)
	{
		if (ft_strchr(charset, *str) > -1)
			str++;
		else
		{
			while (ft_strchr(charset, str[i]) == -1)
				i++;
			return (ft_strndup(str, i)); // return un mot mais faut trouver le point de depart pour la suite
		}
	}
}

#include <stdio.h>
char	**ft_split(char *str, char *charset)
{
	char	**ptr;
	int		i;

	i = 0;
	ptr = (char **)malloc(sizeof(char*) * (ft_word_counter(str, charset) + 1));
	if (!ptr)
		return ((void *)0);
	while (str && *str)
	{
		ptr[i] = ft_start_word(str, charset);
		str = ft_strstr(str, ptr[i++]);
		ptr[i] = (void *)0;
	}
	return (ptr);
}


int main(void)
{
	ft_split("yolo les amis +on-*+fait la teuf?", " +-*");
}