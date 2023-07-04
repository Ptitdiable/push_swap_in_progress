/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:34:03 by flmartin          #+#    #+#             */
/*   Updated: 2022/12/09 15:15:34 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (res[i] != '\0')
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	return (res);
}
