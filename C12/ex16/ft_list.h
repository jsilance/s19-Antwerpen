/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:55:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 13:08:05 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>

typedef	struct s_list t_list;

struct		s_list
{
	void	*data;
	t_list	*next;
};

t_list	*ft_create_elem(void *data);
void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

#endif