/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:36:04 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/10 01:53:33 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

typedef struct s_taylor
{
	int		offset;
	int		fd;
	int		ret;
	char	*ptr;
	char	*prev_ptr;
}				t_taylor;

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
