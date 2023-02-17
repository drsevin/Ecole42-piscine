/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedere <sedere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:36:37 by Sedere            #+#    #+#             */
/*   Updated: 2023/02/06 16:23:19 by sedere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y && x > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && row == 1)
				|| (col == x && row == y && col != 1 && row != 1))
				ft_putchar('A');
			else if ((col == x && row == 1) || (col == 1 && row == y))
				ft_putchar('C');
			else if ((col == 1) || (col == x) || (row == 1) || (row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
