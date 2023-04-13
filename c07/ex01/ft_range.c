/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:15:52 by ychng             #+#    #+#             */
/*   Updated: 2023/04/11 23:25:17 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*m;
	int	num;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	num = max - min;
	m = malloc(4 * num);
	while (max != min)
		m[i++] = min++;
	return (m);
}
