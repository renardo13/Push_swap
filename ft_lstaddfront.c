/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:12 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:44:56 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstaddfront(t_stack_lst **head, t_stack_lst *new_node)
{
	if (head && new_node)
	{
		if (*head)
			(*head)->preview = new_node;
		new_node->next = *head;
		new_node->preview = NULL;
		*head = new_node;
	}
}
