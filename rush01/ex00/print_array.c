/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliaw <jliaw@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:11:16 by jliaw             #+#    #+#             */
/*   Updated: 2023/04/02 18:12:13 by jliaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int *error_found, char core[4][4])
{
	int	i;
	int	j;

	if (*error_found != 1)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			write (1, "  ", 2);
			while (j < 4)
			{
				write(1, &core[i][j], 1);
				write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
