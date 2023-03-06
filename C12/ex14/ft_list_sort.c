/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:51:23 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 11:23:14 by jusilanc         ###   ########.fr       */
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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*ptr;
	t_list	*ptr1;

	ptr = *begin_list;
	while (ptr && ptr->next)
	{
		ptr1 = ptr->next;
		while (ptr)
		{
			if (cmp(ptr->data, ptr1->data) > 0)
				ft_swap(&ptr->data, &ptr1->data);
			ptr1 = ptr1->next;
		}
		ptr = ptr->next;
	}
}
