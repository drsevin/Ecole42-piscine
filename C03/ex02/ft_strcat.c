/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedere <sedere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:42:21 by sedere            #+#    #+#             */
/*   Updated: 2023/02/15 12:21:24 by sedere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cnt;
	int	cnt2;

	cnt = 0;
	cnt2 = 0;
	while (dest[cnt] != '\0')
		cnt++;
	while (src[cnt2] != '\0')
	{
		dest[cnt + cnt2] = src[cnt2];
		cnt2++;
	}
	dest[cnt + cnt2] = '\0';
	return (dest);
}