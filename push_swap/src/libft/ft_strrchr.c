/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:13:50 by flmartin          #+#    #+#             */
/*   Updated: 2022/11/18 13:04:11 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;
	int		j;

	a = c;
	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			j = i;
		i++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	if (j != -1)
		return ((char *)&s[j]);
	return (0);
}
