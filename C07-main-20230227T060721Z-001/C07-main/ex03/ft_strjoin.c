/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedere <sedere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:31:38 by sedere            #+#    #+#             */
/*   Updated: 2023/02/26 11:47:04 by sedere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

void	ft_strjoin_sup(char *ret_val, char **strs, char *sep, int size)
{
	int	counter;
	int	counter2;
	int	len;

	counter = 0;
	len = 0;
	while (counter < size)
	{
		counter2 = 0;
		while (strs[counter][counter2])
		{
			ret_val[len] = strs[counter][counter2];
			counter2++;
			len++;
		}
		counter2 = 0;
		while (sep[counter2] && counter + 1 != size)
		{
			ret_val[len] = sep[counter2];
			len++;
			counter2++;
		}
		counter++;
	}	
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				counter;
	unsigned int	len;
	char			*ret_val;

	counter = 0;
	len = 0;
	while (counter < size)
	{
		len += ft_strlen(strs[counter]);
		if (counter + 1 != size)
			len += ft_strlen(sep);
			counter++;
	}
	ret_val = malloc(sizeof(char) * (len + 1));
	ret_val[len] = 0;
	ft_strjoin_sup(ret_val, strs, sep, size);
	return (ret_val);
}

#include <stdio.h>
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
