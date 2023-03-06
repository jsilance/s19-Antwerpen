/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 06:47:20 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 08:55:06 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct s_list t_list;

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*b_list;
	t_list	*ptr;
	t_list	*next;

	b_list = *begin_list;
	next = 0;
	while (begin_list)
	{
		ptr = next;
		next = b_list;
		b_list = b_list->next;
		next->next = ptr;
	}
	*begin_list = next;
}
