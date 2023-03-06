/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:55:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 06:32:54 by jusilanc         ###   ########.fr       */
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

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))

#endif