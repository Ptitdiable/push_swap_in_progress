/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:58:00 by flmartin          #+#    #+#             */
/*   Updated: 2023/07/04 17:06:47 by flmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// fais une rotation (genre ra) si l'element pointe est root->prev
// fais une rotation (genre rra) si l'element pointe est root
// fais un swap si l'element pointe est root->next
// Cette fonction a ete decouverte par erreur... (._.)' waw !
void ft_swap(t_element *element)
{
	t_element *before;
	t_element *first;
	t_element *second;
	t_element *after;

	before = element->prev;
	first = before->next;
	second = first->next;
	after = second->next;
	before->next = second;
	first->next = after;
	second->next = first;
	first->prev = second;
	second->prev = before;
	after->prev = first;
}

// pour faire l'action ss,  il faut que elem1 = stack->root->next et elem2 = stack->root->next
// pour faire l'action rr,  il faut que elem1 = stack->root 	  et elem2 = stack->root
// pour faire l'action rrr, il faut que elem1 = stack->root->prev et elem2 = stack->root->prev
void ft_double_action(t_element *elem1, t_element *elem2)
{
	ft_swap(elem1);
	ft_swap(elem2);
}

// Attention, si la pile ne contient pas d'element a part root ca foire !
void push_from_stack1_to_stack2(t_stack *stack1, t_stack *stack2)
{
	t_element *element;
	int value;

	element = stack1->root->next;
	value = stack1->root->next->number;
	insertion_top_stack(stack2, value);
	element->prev->next = element->next;
	element->next->prev = element->prev;
	stack1->nb_elements--;
	free(element);
}
