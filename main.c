/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:42:59 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/08 12:43:00 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_lst	*a;

	a = NULL;
	if (ac < 2)
		return (0);
	ft_check_and_parse_args(ac, av, &a);
		// check and initialize A list if the arguments are corrects
	if (ft_lst_sort(&a))
		return (0);
	ft_push_swap(&a);
}
