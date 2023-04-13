/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:56:20 by ychng             #+#    #+#             */
/*   Updated: 2023/03/27 15:13:51 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_number(int n)
{
	char c = n + 48;
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	int arr[n];

	while(n > 0)
	{
		arr[n] == 9;
		while(arr[n] >= 0)
		{
			

			arr[n]--;
		}
	}	

}

int main()
{
	ft_print_combn(2);
}
