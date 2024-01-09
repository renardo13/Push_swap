#include "push_swap.h"

void ft_groups(t_stack_lst **a, t_stack_lst **b)
{
    t_stack_lst *curr;
    int i;
	int j;
	int stack_len;
    stack_len = ft_count(a);
	i = 2;
	j = 0;
	while (ft_count(a) > 3)
		{
			while (j < (stack_len / 3) && ft_count(a) > 3)
			{
				curr = *a;
				if ((curr->final_pos > (stack_len / 3) * i))
				{
					ft_pb(a, b);
					j++;
				}
				else
					ft_ra(a, 1);
			}
			j = 0;
			i--;
		}
}
