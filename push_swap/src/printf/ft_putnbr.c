/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:29:43 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/03 14:36:43 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar_fd(nb % 10 + 48, 1);
	}
}

void	ft_putnbr2(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar_fd(nb % 10 + 48, 1);
}

int	ft_digit(long long int i, int length_base)
{
	int	nb;

	nb = 0;
	while ((i / length_base) >= 1)
	{
		nb++;
		i = i / length_base;
	}
	return (nb);
}
