/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 06:47:20 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/06 07:06:59 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct s_list t_list;

struct		s_list
{
	void	*data;
	t_list	*next;
};

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*ptr;
	t_list	*b_list;
	t_list	*next;
	int		i;

	i = 0;
	b_list = *begin_list;
	while (begin_list)
	{
		if (i == 0)
			ptr = b_list;
		b_list = next;
		next = next->next;
		b_list->next = ptr;
		ptr = b_list;
		if (i == 0)
			ptr->next = NULL;
		i = 1;
	}
}
