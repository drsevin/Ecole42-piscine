/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sedere <Sedere@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:59:51 by Sedere            #+#    #+#             */
/*   Updated: 2023/02/05 17:02:22 by Sedere           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *ary, int n)
{
	int		i;
	bool	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (ary[i - 1] >= ary[i])
			low = 0;
		i++;
	}
	if (low)
	{
		i = 0;
		while (i < n)
			ft_putchar(ary[i++] + 48);
		if (ary[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		ary[11];

	i = 0;
	while (i < n)
		ary[i++] = 0;
	while (ary[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print (ary, n);
		ary[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (ary[i] > 9)
			{
				ary[i - 1]++;
				ary[i] = 0;
			}
			i--;
		}
	}
}
