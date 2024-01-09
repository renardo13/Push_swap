/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:42 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:41:43 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count(t_stack_lst **lst)
// Double pointers to start counting from the first element of the list set the index also
{
	t_stack_lst *current;
	int i;

	current = *lst;
	i = 0;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
