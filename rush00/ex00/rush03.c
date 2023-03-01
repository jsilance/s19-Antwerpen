/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:21:23 by juliensilan       #+#    #+#             */
/*   Updated: 2023/02/26 21:56:16 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
	Draw first and last line.
*/

void	ft_first_last_line(int size, char row, char *corner)
{
	if (size > 0)
		ft_putchar(corner[0]);
	while (--size > 1)
		ft_putchar(row);
	if (size > 0)
		ft_putchar(corner[1]);
	ft_putchar('\n');
}

/*
	Draw all line between the first and the last line.
*/

void	ft_line(int sizex, int sizey, char verticle)
{
	int	i;

	while (--sizey > 1)
	{
		i = 1;
		ft_putchar(verticle);
		while (sizex > ++i)
			ft_putchar(' ');
		if (sizex > 1)
			ft_putchar(verticle);
		ft_putchar('\n');
	}
}

/*
	Draw first line by starting with the index on char [0] for making corner A,
	line with char row between the corner A and B, and finaly draw the corner B.

	Draw all lines between first and last line, start with verticle char,
	some spaces, and end with verticle char for each line.
	
	Draw last line by starting with the index on char [2] for making corner C,
	line with char row between the corner C and D, and finaly draw the corner D.

*/

void	rush(int x, int y)
{
	static char	corner[4] = "ACAC";
	char		verticle;
	char		row;

	verticle = 'B';
	row = 'B';
	if (x < 1 || y < 1)
		return ;
	ft_first_last_line(x, row, &corner[0]);
	ft_line(x, y, verticle);
	if (y > 1)
		ft_first_last_line(x, row, &corner[2]);
}
