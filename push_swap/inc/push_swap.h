/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:57:43 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/04 17:01:49 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../src/libft/libft.h"
#include "../src/printf/printf.h"

typedef struct s_Element
{
	int					number;
	struct s_Element	*next;
	struct s_Element	*prev;
} t_element;

typedef struct s_stack
{
	t_element	*root;
	int 		nb_elements;
} t_stack;

int		ft_verify_args(int nb_of_numbers, char **argv);
void	ft_error(void);
t_stack *initialisation(void);
void 	insertion_top_stack(t_stack *stack, int new_number);
void 	print_stack(t_stack *stack);
void 	ft_swap(t_element *elem);
void	ft_double_action(t_element *elem1, t_element *elem2);
void 	ft_free_stack(t_stack *stack);
void	push_from_stack1_to_stack2(t_stack *stack1, t_stack *stack2);

#endif
