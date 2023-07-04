/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:57:32 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/04 16:55:23 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack *initialisation(void)
{
	t_stack		*stack;
	t_element 	*root;

	stack = malloc(sizeof(*stack));
	root = malloc(sizeof(*root));
	if (stack == NULL || root == NULL)
	{
		free(stack);
		free(root);
		exit(EXIT_FAILURE);
	}
	root->prev = root;
	root->next = root;
	stack->root = root;
	stack->nb_elements = 0;
	return (stack);
}

// sert a initialiser la liste en mettant les elements dans une pile au fur et a mesure. 
void insertion_top_stack(t_stack *stack, int new_number)
{
	t_element *new;

	new = malloc(sizeof(*new));
	if (stack == NULL || new == NULL)
		exit(EXIT_FAILURE);
	new->number = new_number;
	new->prev = stack->root;
	new->next = stack->root->next;
	stack->root->next->prev = new;
	stack->root->next = new;
	stack->nb_elements++;
}

void print_stack(t_stack *stack)
{
	t_element *lol;

	lol = stack->root->next;
	while (lol != stack->root->prev)
	{
		printf("%d->",lol->number);
		lol = lol->next;
	}
	printf("%d",lol->number);
	printf("\nIl y a %d elements dans la pile\n", stack->nb_elements);
}

void ft_free_stack(t_stack *stack)
{
	t_element *element1;
	t_element *element2;

	element1 = stack->root->next;
	while (element1 != stack->root)
	{
		element2 = element1->next;
		free(element1);
		element1 = element2;
	}
	free(stack);
}
