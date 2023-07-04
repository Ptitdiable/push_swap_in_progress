/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:00:24 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/03 14:36:17 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_case_i(va_list args)
{
	int	i;
	int	j;

	j = 1;
	i = va_arg(args, int);
	ft_putnbr(i);
	if (i == -2147483648)
		return (11);
	if (i < 0)
	{
		j++;
		i = -i;
	}
	j += ft_digit(i, 10);
	return (j);
}

int	ft_case_u(va_list args)
{
	int				i;
	unsigned int	u;

	i = 1;
	u = va_arg(args, unsigned int);
	ft_putnbr2(u);
	if (u < 0)
		i++;
	i += ft_digit(u, 10);
	return (i);
}

int	ft_case_x(va_list args)
{
	int			i;
	int			j;
	int long	k;

	i = va_arg(args, int);
	j = 1;
	if (i < 0)
	{
		k = 2147483648;
		k += k + i;
		ft_putnbr_base(k, "0123456789abcdef");
		j += ft_digit(k, 16);
		return (j);
	}
	ft_putnbr_base(i, "0123456789abcdef");
	j += ft_digit(i, 16);
	return (j);
}

int	ft_case_bigx(va_list args)
{
	int			i;
	int			j;
	int long	k;

	i = va_arg(args, int);
	j = 1;
	if (i < 0)
	{
		k = 2147483648;
		k += k + i;
		ft_putnbr_base(k, "0123456789ABCDEF");
		j += ft_digit(k, 16);
		return (j);
	}
	ft_putnbr_base(i, "0123456789ABCDEF");
	j += ft_digit(i, 16);
	return (j);
}

int	ft_case_last(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
