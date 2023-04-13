/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:11:35 by ychng             #+#    #+#             */
/*   Updated: 2023/03/29 19:28:13 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// Check each item whether if it's larger than the item next to it
// If it is then swap
// If not stay
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int main()
{
	int num[10] = {5, 1, 4, 2, 6, 7, 8, 9, 0, 3};
	ft_sort_int_tab(num, 10);

	int i = 0;
	while(i < 10)
	{
		printf("%d", num[i]);
		i++;
	}
}
*/
