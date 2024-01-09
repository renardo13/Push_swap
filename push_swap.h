/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:43:02 by melmarti          #+#    #+#             */
/*   Updated: 2024/01/09 18:58:06 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_lst
{
	int					content;
	int					index;
	int					score;
	int					final_pos;
	struct s_stack_lst	*target;
	struct s_stack_lst	*next;
	struct s_stack_lst	*preview;
}						t_stack_lst;

// parsing fonctions
int						ft_check_and_parse_args(int ac, char **av,
							t_stack_lst **a);
void ft_freesplit (char **av);

// principal fonctions
void					ft_ascendant(t_stack_lst **a);
void					ft_groups(t_stack_lst **a, t_stack_lst **b);
void					ft_push_swap(t_stack_lst **a);
void					ft_sort_3(t_stack_lst **a);
int						ft_lst_sort(t_stack_lst **a);
int						ft_count(t_stack_lst **lst);
void					ft_index(t_stack_lst *lst);
void					ft_target(t_stack_lst **a, t_stack_lst **b);
void					ft_score(t_stack_lst **a, t_stack_lst **b);
int						ft_same_half(t_stack_lst **a, t_stack_lst **b);
t_stack_lst				*ft_find_min(t_stack_lst **lst);
int						ft_first_half(t_stack_lst **lst, t_stack_lst *cheapest);
t_stack_lst				*ft_find_cheapest(t_stack_lst **b, t_stack_lst **a);
void					ft_instructions(t_stack_lst *cheapest, t_stack_lst **b,
							t_stack_lst **a);
void					ft_sort_end(t_stack_lst **a);
void					ft_lstprint(t_stack_lst **lst, char *liste);

// list fonctions
void					ft_lstaddfront(t_stack_lst **head,
							t_stack_lst *new_node);
t_stack_lst				*ft_lst_new(int nbr);
void					ft_lstclear(t_stack_lst **lst);
void					ft_lstaddback(t_stack_lst **lst, t_stack_lst *new_node);
t_stack_lst				*ft_lstlast(t_stack_lst *lst);

// instructions
void					ft_sa(t_stack_lst **a, int print);
void					ft_sb(t_stack_lst **b, int print);
void					ft_pb(t_stack_lst **a, t_stack_lst **b);
void					ft_pa(t_stack_lst **b, t_stack_lst **a);
void					ft_ra(t_stack_lst **a, int print);
void					ft_rb(t_stack_lst **b, int print);
void					ft_rr(t_stack_lst **a, t_stack_lst **b);
void					ft_rrb(t_stack_lst **b, int print);
void					ft_rra(t_stack_lst **a, int print);
void					ft_rrr(t_stack_lst **a, t_stack_lst **b);

// libft fonctions
ssize_t					ft_strlen(char *str);
char					**ft_split(char *s, char c);
long int				ft_atol(char *s);

int						ft_error(void);

#endif