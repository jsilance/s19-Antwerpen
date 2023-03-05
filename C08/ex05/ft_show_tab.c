/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliensilance <juliensilance@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:22:35 by juliensilan       #+#    #+#             */
/*   Updated: 2023/03/05 10:38:17 by juliensilan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;

void	ft_show_tab(struct s_stock_str *par)
{
	while (par && *par)
	{
		write(1, par->copy, par->size);
		if (!par->str)
			break ;
		par++;
	}
}
