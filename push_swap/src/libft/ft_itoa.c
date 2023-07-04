/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:05 by flmartin          #+#    #+#             */
/*   Updated: 2022/12/09 14:54:43 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_char(int n)
{
	char	nb_char;

	nb_char = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		nb_char += 1;
	}
	return (nb_char);
}

static void	ft_fill(char *res, size_t nb_char, size_t cmpt, unsigned int tmp)
{
	size_t	i;

	i = 0;
	while (nb_char - 1 >= cmpt + i)
	{
		res[nb_char - 1 - i] = 48 + tmp % 10;
		tmp /= 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	tmp;
	size_t			cmpt;
	size_t			nb_char;
	char			*res;

	tmp = n;
	cmpt = 0;
	nb_char = ft_count_char(n);
	if (n < 0)
	{
		nb_char += 1;
		cmpt += 1;
		tmp = -n;
	}
	res = malloc(sizeof(char) * (nb_char + 1));
	if (!res)
		return (NULL);
	ft_fill(res, nb_char, cmpt, tmp);
	if (n < 0)
		res[0] = '-';
	res[nb_char] = '\0';
	return (res);
}
