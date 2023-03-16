/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:28:39 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/16 15:23:58 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

//faut enlever tout le chainon et non seulement la data

void	ft_list_remove_if(t_list **begin_list,
				void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*ptr;

	ptr = *begin_list;
	while (ptr)
	{
		if (!cmp(ptr->data, data_ref))
		{
			free_fct(ptr->data);
			ptr->data = 0;
		}
		ptr = ptr->next;
	}
}
