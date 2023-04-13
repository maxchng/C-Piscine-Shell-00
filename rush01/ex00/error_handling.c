/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliaw <jliaw@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:25:31 by jliaw             #+#    #+#             */
/*   Updated: 2023/04/02 18:26:40 by jliaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	error_handling(int *error_found, char *arr)
{
	int	error_handling;
	int	error_i;

	error_handling = 0;
	error_i = 0;
	*error_found = 0;
	while (error_handling < 4)
	{
		if ((arr[error_i] - 48 + arr[error_i + 8]) > '5')
		{
			write(1, "\nerror\n", 7);
			*error_found = 1;
			break ;
		}
		if ((arr[error_i + 16] - 48 + arr[error_i + 24]) > '5')
		{
			write(1, "\nerror\n", 7);
			*error_found = 1;
			break ;
		}
		error_i = error_i + 2;
		error_handling++;
	}
}
