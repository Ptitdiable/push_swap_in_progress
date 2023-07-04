/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:15:39 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/04 17:05:28 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *pile_A;
	t_stack *pile_B;
	int i;

	i = 0;
	if (argc == 1)
		ft_error();
	ft_verify_args(argc - 1, argv);
	pile_A = initialisation();
	pile_B = initialisation();
	while (++i < argc)
		insertion_top_stack(pile_A, ft_atoi(argv[argc - i]));
	printf("pile A :\n");
	print_stack(pile_A);
	printf("pile B :\n");
	print_stack(pile_B);
	push_from_stack1_to_stack2(pile_A, pile_B);
	printf("\npile A :\n");
	print_stack(pile_A);
	printf("pile B :\n");
	print_stack(pile_B);
	push_from_stack1_to_stack2(pile_B, pile_A);
	printf("\npile A :\n");
	print_stack(pile_A);
	printf("pile B :\n");
	print_stack(pile_B);
	ft_free_stack(pile_A);
	return (0);
}
