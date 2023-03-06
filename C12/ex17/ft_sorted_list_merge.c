/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:48:20 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 14:33:35 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, t_list *elem, int (*cmp)())
{
	t_list	*ptr;

	ptr = *begin_list;
	while (ptr)
	{
		if (cpm(ptr->data, elem->data) < 0)
		{
			if (cmp(ptr->next->data, elem->data) > 0)
			{
				elem->next = ptr->next;
				ptr->next = elem;
			}
		}
		ptr = ptr->next;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*ptr;

	while (begin_list1 && begin_list2)
	{
		ptr = begin_list2->next;
		ft_sorted_list_insert(begin_list1, begin_list2, cmp);
		begin_list2 = ptr;
	}
}
