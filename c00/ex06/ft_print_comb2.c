/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:38:53 by ychng             #+#    #+#             */
/*   Updated: 2023/04/01 12:04:37 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int n)
{
	char	c;

	c = (n / 10) + 48;
	write(1, &c, 1);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	arr[2];

	arr[0] = 0;
	while (arr[0] < 99)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] < 100)
		{
			print_num(arr[0]);
			write(1, " ", 1);
			print_num(arr[1]);
			if (arr[0] != 98 || arr[1] != 99)
				write(1, ", ", 2);
			arr[1]++;
		}
		arr[0]++;
	}
}

/*
int main()
{
	ft_print_comb2();
}
*/
