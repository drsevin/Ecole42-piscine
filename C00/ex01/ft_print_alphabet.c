/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sedere <Sedere@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:30:02 by Sedere            #+#    #+#             */
/*   Updated: 2023/02/04 18:50:07 by Sedere           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	hrf;

	hrf = 'a';
	while (hrf <= 'z')
	{
		write(1, &hrf, 1);
		hrf++;
	}
}
