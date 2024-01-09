/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:39 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/09 18:57:59 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_parse(int ac, char **av, t_stack_lst **a)
		// ** Parsing arguments from the user and initializing A list **
{
	int i;
	long int nbr;

	if (ac == 2)
		// if there are only two argument the index starts from 0 because we already did ft_split
		i = 0;
	else
		i = 1;
	while (av[i])
	{
		nbr = (ft_atol(av[i]));
		ft_lstaddback(a, ft_lst_new(nbr));
			// create new nodes and initialize A list
		i++;
	}
	ft_freesplit(av);
}

int	ft_check_duplicate(int ac, char **av)
{
	int	j;
	int	i;

	if (ac > 2)
		i = 1;
	else
		i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atol(av[j]) == ft_atol(av[i]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_special_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}
int	ft_check_and_parse_args(int ac, char **av, t_stack_lst **a)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_special_char(av[i]))
			exit(ft_error());
		i++;
	}
	if (ac == 2)
		av = ft_split(av[1], ' ');
	if (ft_check_duplicate(ac, av))
		exit(ft_error());
	ft_parse(ac, av, a);
	return (1);
}
