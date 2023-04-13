/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:43:21 by ychng             #+#    #+#             */
/*   Updated: 2023/04/13 15:27:06 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_of_arr(int size, char **strs)
{
	int	i;
	int	count;
	int	j;

	count = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		count++;
		i++;
	}
	return (count);
}

int	size_of_sep(char *sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (sep[i])
	{
		count++;
		i++;
	}
	count++;
	return (count);
}

void	print_arr(int size, char **strs, char *sep, char *s)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			s[z] = strs[i][j];
			j++;
			z++;
		}
		j = 0;
		while (sep[j] && i < (size - 1))
		{
			s[z] = sep[j];
			j++;
			z++;
		}
		i++;
	}
	s[z] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count_strs;
	int		count_sep;
	char	*s;

	if (size > 0)
	{
		count_strs = size_of_arr(size, strs);
		count_sep = size_of_sep(sep);
		s = malloc(count_strs + (count_sep * (size - 1)) + 1);
		print_arr(size, strs, sep, s);
	}
	else
		s = malloc(0);
	return (s);
}
