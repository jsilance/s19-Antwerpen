/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 06:28:49 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/12 14:38:06 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*ptr;

	while (begin_list)
	{
		ptr = begin_list;
		begin_list = begin_list->next;
		free_fct(ptr->data);
		free_fct(ptr);
	}
}
