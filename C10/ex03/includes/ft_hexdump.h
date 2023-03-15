/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:57:57 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/15 18:47:36 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>

typedef struct s_hexd
{
	int		offset;
	int		fd;
	int		ret;
	char	*ptr;
	char	*prev_ptr;
	int		same;
}				t_hexd;

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *str);

void	ft_putnbr_base(int nbr, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_print_addr(int same, int ret);

void	chars_printer(char *cpy, int isvoid);
int		hex_chars_printer(char *ptr, int isvoid, int i);

#endif
