/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:32:57 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 11:52:24 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

unsigned int	ft_list_size(t_list *begin_list)
{
	unsigned int	i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int	i;

	i = 0;
	while (begin_list && i < nbr)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_list_size(begin_list);
	while (i < --len)
		ft_swap(ft_list_at(begin_list, i++)->data, ft_list_at(begin_list, len));
}
