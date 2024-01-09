/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:35 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:50:09 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// set a boolean to avoid writing 2 operations when it is ft_optimize that call the fonctions
void	ft_ra(t_stack_lst **a, int print)
{
	t_stack_lst	*last;
	t_stack_lst	*currenta;

	currenta = *a;
	(*a) = (*a)->next;
	last = ft_lstlast(currenta);
	last->next = currenta;
	currenta->preview = last;
	currenta->next = NULL;
	if (print == 1)
		write(1, "ra\n", 3);
}
void	ft_rb(t_stack_lst **b, int print)
{
	t_stack_lst	*last;
	t_stack_lst	*current;

	current = *b;
	(*b) = (*b)->next;
	last = ft_lstlast(current);
	last->next = current;
	current->preview = last;
	current->next = NULL;
	if (print == 1)
		write(1, "rb\n", 3);
}
void	ft_rra(t_stack_lst **a, int print)
{
	t_stack_lst	*last;
	t_stack_lst	*new_last;
	t_stack_lst	*temp;

	temp = *a;
	if (ft_count(a) < 2)
		return ;
	last = ft_lstlast(temp);
	*a = last;
	last->next = temp;
	temp->preview = last;
	new_last = last->preview;
	new_last->next = NULL;
	last->preview = NULL;
	if (print == 1)
		write(1, "rra\n", 4);
}
void	ft_rrb(t_stack_lst **b, int print)
{
	t_stack_lst	*last;
	t_stack_lst	*new_last;
	t_stack_lst	*temp;

	temp = *b;
	if (ft_count(b) < 2)
		return ;
	last = ft_lstlast(temp);
	*b = last;
	last->next = temp;
	temp->preview = last;
	new_last = last->preview;
	new_last->next = NULL;
	last->preview = NULL;
	if (print == 1)
		write(1, "rrb\n", 4);
}
