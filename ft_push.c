/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:31 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:42:32 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack_lst **b, t_stack_lst **a)
{
	t_stack_lst	*tmp;

	if (ft_count(b) < 1)
		return ;
	tmp = (*b)->next;
	ft_lstaddfront(a, *b);
	if (tmp)
	{
		tmp->preview = NULL;
		*b = tmp;
	}
	else
		*b = NULL;
	write(1, "pa\n", 3);
}
void	ft_pb(t_stack_lst **a, t_stack_lst **b)
{
	t_stack_lst	*tmp;

	if (ft_count(a) < 1)
		return ;
	tmp = (*a)->next;
	ft_lstaddfront(b, *a);
	if (tmp)
	{
		tmp->preview = NULL;
		*a = tmp;
	}
	else
		*a = NULL;
	write(1, "pb\n", 3);
}
