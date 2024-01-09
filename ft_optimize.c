/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:20 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:42:23 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_stack_lst **a, t_stack_lst **b)
{
	write(1, "rr\n", 3);
	ft_ra(a, 0);
	ft_rb(b, 0);
}
void	ft_rrr(t_stack_lst **a, t_stack_lst **b)
{
	write(1, "rrr\n", 4);
	ft_rra(a, 0);
	ft_rrb(b, 0);
}
void	ft_ss(t_stack_lst **a, t_stack_lst **b)
{
	write(1, "ss\n", 3);
	ft_sa(a, 0);
	ft_sb(b, 0);
}
