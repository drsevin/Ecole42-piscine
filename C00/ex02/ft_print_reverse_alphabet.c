/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sedere <Sedere@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:48:47 by Sedere            #+#    #+#             */
/*   Updated: 2023/02/05 10:49:46 by Sedere           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rvs;

	rvs = 'z';
	while (rvs >= 'a')
	{
		write(1, &rvs, 1);
		rvs--;
	}
}
