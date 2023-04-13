/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliaw <jliaw@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:06:17 by jliaw             #+#    #+#             */
/*   Updated: 2023/04/02 18:06:52 by jliaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	logic1(char *arr, char core[4][4])
{
	int	i_arr;
	int	j_arr;

	i_arr = 0;
	j_arr = 0;
	while (j_arr < 4)
	{
		if (arr[i_arr] == '4')
			core[0][j_arr] = '1';
		if (arr[i_arr + 8] == '4')
			core[3][j_arr] = '1';
		if (arr[i_arr + 16] == '4')
			core[j_arr][0] = '1';
		if (arr[i_arr + 24] == '4')
			core[j_arr][3] = '1';
		j_arr++;
		i_arr = i_arr + 2;
	}
}
