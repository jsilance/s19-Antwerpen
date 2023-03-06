/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:46:49 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 13:18:59 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*ptr;
	t_list	*new_ptr;

	ptr = *begin_list;
	new_ptr = 0;
	while (ptr)
	{
		if (cpm(ptr->data, data) < 0)
		{
			if (cmp(ptr->next->data, data) > 0)
			{
				new_ptr = ft_create_elem(data);
				new_ptr->next = ptr->next;
				ptr->next = new_ptr;
			}
		}
		ptr = ptr->next;
	}
}
