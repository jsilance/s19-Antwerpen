/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:47:29 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 15:00:39 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*ptr;

	ptr = malloc(sizeof(t_btree));
	ptr->item = item;
	ptr->left = 0;
	ptr->right = 0;
	return (ptr);
}
