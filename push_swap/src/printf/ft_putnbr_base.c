/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:20:10 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/03 14:36:52 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check_base(const char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(long long int nbr, const char *base)
{
	long long int			a;

	a = nbr;
	if (ft_strlen(base) != 0 && ft_strlen(base) != 1
		&& ft_check_base(base) == 1)
	{
		if (a < 0)
		{
			a = -a;
			write(1, "-", 1);
		}	
		if (a > ft_strlen(base) - 1)
			ft_putnbr_base(a / ft_strlen(base), base);
		ft_putchar_fd(base[a % ft_strlen(base)], 1);
	}
}

void	ft_putnbr_base2(long long unsigned int nbr, const char *base)
{
	long long unsigned int	a;

	a = nbr;
	if (ft_strlen(base) != 0 && ft_strlen(base) != 1
		&& ft_check_base(base) == 1)
	{
		if (a < 0)
		{
			a = -a;
			write(1, "-", 1);
		}
		if (a > (unsigned long long)ft_strlen(base) - 1)
			ft_putnbr_base2(a / ft_strlen(base), base);
		ft_putchar_fd(base[a % ft_strlen(base)], 1);
	}
}
