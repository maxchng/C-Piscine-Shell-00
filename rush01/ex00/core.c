/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliaw <jliaw@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 09:55:02 by jliaw             #+#    #+#             */
/*   Updated: 2023/04/02 18:25:07 by jliaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	error_handling(int *error_found, char *arr);

void	logic1(char *arr, char core[4][4]);

void	logic2(char *arr, char core[4][4]);

void	logic3(char core[4][4]);

void	logic4(char core[4][4]);

void	logic5(char *arr, char core[4][4]);

void	print_array(int *error_found, char core[4][4]);

void	core(char *arr)
{
	int		i;
	int		j;
	int		error_found;
	char	core[4][4];

	i = 0;
	while (i < 4)
	{	
		j = 0;
		while (j < 4)
		{
			core[i][j] = '0';
			j++;
		}
		i++;
	}
	error_handling(&error_found, arr);
	logic1(arr, core);
	logic2(arr, core);
	logic3(core);
	logic4(core);
	logic5(arr, core);
	print_array(&error_found, core);
}
