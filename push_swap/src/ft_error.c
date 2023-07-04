/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:29:10 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/03 16:00:03 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

int	ft_verify_args(int nb_of_numbers, char **argv)
{
	long long int	tmp;
	int				i;
	int				j;

	argv++;
	j = 0;
	while (j < nb_of_numbers)
	{
		tmp = ft_atoi(*argv);
		i = 0;
		while (i < nb_of_numbers - 1 - j)
		{
			if (tmp == ft_atoi(argv[i + 1]))
				ft_error();
			i++;
		}
		if (ft_strlen(*argv) > 11 || ft_atoi(*argv) > 2147483647 || ft_atoi(*argv) < -2147483648)
			ft_error();
		argv++;
		j++;
	}
	return (0);
}
