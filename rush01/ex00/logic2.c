/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliaw <jliaw@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:04:28 by jliaw             #+#    #+#             */
/*   Updated: 2023/04/02 18:05:35 by jliaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	logic2(char *arr, char core[4][4])
{
	int	i_arr;
	int	j_arr;

	i_arr = 0;
	j_arr = 0;
	while (j_arr < 4)
	{
		if (arr[i_arr] == '1' )
			core[0][j_arr] = '4';
		if (arr[i_arr + 8] == '1' )
			core[3][j_arr] = '4';
		if (arr[i_arr + 16] == '1' )
			core[j_arr][0] = '4';
		if (arr[i_arr + 24] == '1' )
			core[j_arr][3] = '4';
		j_arr++;
		i_arr = i_arr + 2;
	}
}
