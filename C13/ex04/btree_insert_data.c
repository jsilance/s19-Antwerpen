/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:59:56 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 22:03:19 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*ptr;

	ptr = *root;
	if(!ptr)
		ptr = btree_create_node(item);
	else
	{	
		while (ptr)
		{
			if (cmp(ptr->item, item) <= 0)
			{
				if (ptr->left)
					ptr = ptr->left;
				else
					ptr->left = btree_create_node(item);
			}
			else if (ptr->right)
				ptr = ptr->right;
			else
				ptr->right = btree_create_node(item);
		}
	}
}
