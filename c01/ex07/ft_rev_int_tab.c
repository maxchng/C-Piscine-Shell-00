/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:44:30 by ychng             #+#    #+#             */
/*   Updated: 2023/03/29 19:10:22 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// Store the value of first item in temp
// Assign first item as last item
// Assign last item as temp
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	middle;

	i = 0;
	middle = size / 2;
	while (i < middle)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int main()
{
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(num, 10);
	
	int i = 0;
	while(i < 10)
	{
		printf("%d", num[i]);
		i++;
	}
}
*/
