/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:25:38 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/12 18:46:39 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list && begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!begin_list || !*begin_list)
		*begin_list = ft_create_elem(data);
	else
		ft_list_last(*begin_list)->next = ft_create_elem(data);
}
