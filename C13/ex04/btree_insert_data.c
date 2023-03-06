/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:59:56 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 19:42:30 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*ptr;

	ptr = *root;
	while (ptr)
	{
		if (cmp(ptr->item, item) <= 0)
		{
			if (ptr->left)
				ptr = ptr->left;
			else
				ptr->left = 
		}
		else
			ptr = ptr->right;
	}
}
