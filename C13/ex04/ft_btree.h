/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:55:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 17:59:47 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

#include <stdlib.h>

typedef struct s_btree
{
	struct s_btree *left;
	struct s_btree *right;
	void *item;
}				t_btree;

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

#endif
