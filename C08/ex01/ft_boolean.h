/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:23:38 by jusilanc          #+#    #+#             */
/*   Updated: 2023/03/07 13:47:46 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

# define TRUE 1
# define FALSE 0

# define EVEN(var) (var % 2 == 0)

typedef int	t_bool;

#endif
