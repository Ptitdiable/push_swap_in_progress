/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:09:25 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/03 13:12:38 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *str)
{
	int	i;
	int	cmpt;

	i = 0;
	cmpt = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if ((str[i] < 9 || str[i] > 13) && str[i] != ' '
			&& str[i] != '+' && str[i] != '-')
			return (0);
		if ((str[i] == '+' || str[i] == '-' || str[i] == ' '
				|| (str[i] >= 9 && str[i] <= 13)) && cmpt == 1)
			return (0);
		if (str[i] == '+' || str[i] == '-')
			cmpt = 1;
		i++;
	}
	return (1);
}

long long int	ft_atoi(const char *str)
{
	int				i;
	int				p_or_n;
	long long int	res;

	i = 0;
	p_or_n = 1;
	res = 0;
	if (ft_check(str) == 0)
		return (-2147483649);
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			p_or_n *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + (str[i] - 48);
		i++;
	}
	return (res * p_or_n);
}
