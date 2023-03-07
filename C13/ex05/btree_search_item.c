/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:10:29 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 22:59:58 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	int	i;

	if (!root)
		return (0);
	i = cmpf(root->item, data_ref);
	if (i == 0)
		return (root->item);
	if (i < 0)
		return (btree_search_item(root, data_ref, cmpf));
	return (btree_search_item(root, data_ref, cmpf));
}
