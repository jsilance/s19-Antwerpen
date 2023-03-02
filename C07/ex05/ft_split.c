/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:26:42 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/02 19:41:15 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

	i = 0;
	while (str && str[i])
		i++;
	if (str)
		newstr = malloc(sizeof(char) * (i + 1));
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
			while (ft_strchr(charset, *str) == -1)
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
	char	*ptr;

	ptr = malloc(sizeof(char*) * (ft_word_counter(str, charset) + 1));
	if (!ptr)
		return ((void *)0);
	printf("[%d]\n", ft_word_counter(str, charset));
	return ((void *)0);
}


int main(void)
{
	ft_split("yolo les amis +on-*+fait la teuf?", " +-*");
}