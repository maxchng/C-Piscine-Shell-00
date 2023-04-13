/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:43:50 by ychng             #+#    #+#             */
/*   Updated: 2023/04/09 19:37:29 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	product;

	i = 0;
	product = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		product = product * (i + 1);
		i++;
	}
	return (product);
}
