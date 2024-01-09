/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:14 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/09 18:46:17 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_lstdelone(t_stack_lst *lst)
{
	if (lst)
	{
		//free(lst->content);
		//free(lst->index);
		//free(lst->final_pos);
		free(lst->next);
		free(lst->preview);
		//free(lst->score);
		free(lst);
	}
}


void	ft_lstclear(t_stack_lst **lst)
{
	 t_stack_lst	*tmp;

	// if (!*lst)
	// 	return ;
	// tmp = (*lst)->next;
	// (*lst)->content = 0;
	// (*lst)->index = 0;
	// free((*lst)->preview);
	// free((*lst)->next);
	// free((*lst)->target);
	// free(*lst);
	// if (!tmp)
	// 	return ;
	// (*lst) = tmp;
	// ft_lstclear(&tmp);


	if (!lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = tmp;
	}	
}
