/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:20:59 by ychng             #+#    #+#             */
/*   Updated: 2023/04/13 15:51:26 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*_strchr(char *str, int c);

char	*_strcpy(char *dest, char *src);

void	count_words(char *str, char *charset, int len, int *count);

void	add_words(char *str, char *charset, int len, char **strings);

char	**ft_split(char *str, char *charset);

char	*_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

char	*_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

void	count_words(char *str, char *charset, int len, int *count)
{
	int	i;
	int	old_i;

	i = 0;
	*count = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (_strchr(charset, str[i]) == NULL)
				break ;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (_strchr(charset, str[i]) != NULL)
				break ;
			i++;
		}
		if (i > old_i)
			*count = *count + 1;
	}
}

void	add_words(char *str, char *charset, int len, char **strings)
{
	int		i;
	int		j;
	char	buffer[1000];
	int		str_index;

	i = 0;
	str_index = 0;
	while (i < len)
	{
		while (i < len && !(_strchr(charset, str[i]) == NULL))
			i++;
		j = 0;
		while (i < len && !(_strchr(charset, str[i]) != NULL))
			buffer[j++] = str[i++];
		if (j > 0)
		{
			buffer[j] = '\0';
			strings[str_index] = malloc(sizeof(char) * (len + 1));
			_strcpy(strings[str_index++], buffer);
		}
	}	
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	int		count;
	char	**strings;

	len = 0;
	while (str[len])
		len++;
	count_words(str, charset, len, &count);
	strings = malloc(sizeof(char *) * (count + 2));
	add_words(str, charset, len, strings);
	strings[count] = "\0";
	return (strings);
}
