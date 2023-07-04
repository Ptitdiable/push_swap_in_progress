/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:24:52 by flmartin          #+#    #+#             */
/*   Updated: 2022/11/03 17:08:28 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
	{
		return (0);
	}
	return (1);
}