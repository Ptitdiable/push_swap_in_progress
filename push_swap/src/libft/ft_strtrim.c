/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:30:59 by flmartin          #+#    #+#             */
/*   Updated: 2022/12/08 11:10:40 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	i = 0;
	j = len - 1;
	if (s1 == NULL || set == NULL || len == 0)
		return (ft_strdup(s1));
	while (i < len && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (ft_strchr(set, s1[j]) != NULL && j > 0)
		j--;
	if (j < i)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (j - i + 2));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + i, j - i + 2);
	return (res);
}
