/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:43:45 by ychng             #+#    #+#             */
/*   Updated: 2023/04/11 23:15:01 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	i = max - min;
	range[0] = malloc(4 * i);
	if (!range[0])
		return (-1);
	i = 0;
	while (max != min)
		range[0][i++] = min++;
	return (i);
}
