/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:17:36 by ychng             #+#    #+#             */
/*   Updated: 2023/04/01 12:03:28 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	print_negative(int *nb);

/*
int	main(void)
{
	ft_putnbr(-1);
}
*/

void	ft_putnbr(int nb)
{
	char	buffer[11];
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	print_negative(&nb);
	while (nb)
	{
		buffer[i++] = nb % 10 + 48;
		nb = nb / 10;
	}
	buffer[i] = '\0';
	while (i--)
	{
		write(1, &buffer[i], 1);
	}
}

void	print_negative(int *nb)
{
	if (*nb == 0)
	{
		write(1, "0", 1);
	}
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = *nb * -1;
	}
}
