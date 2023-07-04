/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:19:13 by flmartin          #+#    #+#             */
/*   Updated: 2022/11/24 13:47:10 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (s2[0] == '\0' || ft_strlen(s2) == 0)
		return ((char *)s1);
	while (i < len && s1[i])
	{
		if (ft_strncmp((char *)(s1 + i), (char *)s2, ft_strlen(s2)) == 0)
		{
			if (ft_strlen(s2) + i > len)
				return (0);
			return ((char *)(s1 + i));
		}
		i++;
	}
	return (0);
}
