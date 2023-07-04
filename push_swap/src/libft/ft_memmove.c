/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:05:14 by flmartin          #+#    #+#             */
/*   Updated: 2022/11/18 13:04:57 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*d;
	const char		*s;

	if (dst == 0 && src == 0)
		return (0);
	d = dst;
	s = src;
	i = 0;
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
