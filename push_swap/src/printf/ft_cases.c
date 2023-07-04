/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:53:24 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/03 14:36:08 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_cases(char c, va_list args)
{
	if (c == 'c')
		return (ft_case_c(args));
	else if (c == 's')
		return (ft_case_s(args));
	else if (c == 'p')
		return (ft_case_p(args));
	else if (c == 'd')
		return (ft_case_d(args));
	else if (c == 'i')
		return (ft_case_i(args));
	else if (c == 'u')
		return (ft_case_u(args));
	else if (c == 'x')
		return (ft_case_x(args));
	else if (c == 'X')
		return (ft_case_bigx(args));
	else if (c == '%')
		return (ft_case_last());
	else
	{
		ft_putchar_fd(c, 1);
		return (1);
	}
}

int	ft_case_c(va_list args)
{
	int		i;
	char	c;

	i = va_arg(args, int);
	c = i;
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_case_s(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_case_p(va_list args)
{
	long long int			i;
	int						j;
	unsigned long long		k;
	void					*p;

	p = va_arg(args, void *);
	i = (long long int)p;
	j = 3;
	ft_putstr_fd("0x", 1);
	if (i < 0)
	{
		k = 9223372036854775807;
		k = 2 * k + i + 2;
		ft_putnbr_base2(k, "0123456789abcdef");
		while ((k / 16) >= 1)
		{
			j++;
			k = k / 16;
		}
		return (j);
	}
	ft_putnbr_base(i, "0123456789abcdef");
	j += ft_digit(i, 16);
	return (j);
}

int	ft_case_d(va_list args)
{
	int	i;
	int	d;

	i = 1;
	d = va_arg(args, int);
	ft_putnbr(d);
	if (d == -2147483648)
		return (11);
	if (d < 0)
	{
		i++;
		d = -d;
	}
	i += ft_digit(d, 10);
	return (i);
}
