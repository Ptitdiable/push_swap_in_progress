/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:27:40 by flmartin          #+#    #+#             */
/*   Updated: 2022/12/09 16:34:20 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (start >= (unsigned int)ft_strlen(s))
	{
		res = malloc(sizeof(char) * 1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (len >= ft_strlen(s) - start)
		res = malloc(sizeof(char) * ((unsigned int)ft_strlen(s) - start + 1));
	else
		res = malloc(len + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < len && start + i < (unsigned int)ft_strlen(s))
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
