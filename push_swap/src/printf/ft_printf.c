/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:50:06 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/03 14:36:25 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			i++;
		}
		else
		{
			if (ft_strlen(str) == 1)
				return (i);
			str++;
			i += ft_cases(*str, args);
		}
		str++;
	}
	va_end(args);
	return (i);
}
