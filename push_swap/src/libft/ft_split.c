/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:23:51 by flmartin          #+#    #+#             */
/*   Updated: 2022/12/09 14:34:31 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_words(char const *s, char c)
{
	unsigned int	nb_words;
	unsigned int	i;

	nb_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			nb_words += 1;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (nb_words);
}

static unsigned int	ft_len_word(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static void	*ft_free_all(char **strs, unsigned int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_words;
	unsigned int	len_word;
	char			**res;

	i = -1;
	nb_words = ft_count_words(s, c);
	res = malloc(sizeof(char *) * (nb_words + 1));
	if (!res)
		return (NULL);
	while (++i < nb_words)
	{
		while (*s != '\0' && *s == c)
			s++;
		len_word = ft_len_word(s, c);
		res[i] = malloc(sizeof(char) * (len_word + 1));
		if (!(res[i]))
			return (ft_free_all(res, i));
		ft_strlcpy(res[i], s, len_word + 1);
		s += len_word;
	}
	res[i] = NULL;
	return (res);
}
