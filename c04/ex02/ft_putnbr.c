/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:29:12 by ychng             #+#    #+#             */
/*   Updated: 2023/04/09 17:16:12 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	negative(int *nb)
{
	int	i;

	i = 0;
	if (nb[i] == 0)
		write(1, "0", 1);
	if (nb[i] < 0)
	{
		write(1, "-", 1);
		nb[i] *= -1;
	}
}

void	ft_putnbr(int nb)
{
	char	buffer[100];
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	negative(&nb);
	while (nb)
	{
		buffer[i] = (nb % 10) + '0';
		i++;
		nb /= 10;
	}
	while (i--)
		write(1, &buffer[i], 1);
}
