/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:34:16 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 00:42:40 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*ptr;

	ptr = ft_create_elem(data);
	if (begin_list && *begin_list)
		ptr->next = *begin_list;
	*begin_list = ptr;
}

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*list;

	list = NULL;
	while (strs && *strs && --size >= 0)
	{
		ft_list_push_front(list, *strs);
		strs++;
	}
	return (list);
}
