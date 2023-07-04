/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:32:27 by flmartin          #+#    #+#             */
/*   Updated: 2022/11/25 14:01:34 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*superptr;

	superptr = malloc(count * size);
	if (!superptr)
		return (0);
	ft_bzero(superptr, count * size);
	return (superptr);
}
