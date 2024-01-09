#include "push_swap.h"

void	ft_swap_pos(t_stack_lst *curr, t_stack_lst *currenta)
{
	int tmp;

	tmp = currenta->final_pos;
	currenta->final_pos = curr->final_pos;
	curr->final_pos = tmp;
}
void	ft_ascendant(t_stack_lst **a)
{
	t_stack_lst	*currenta;
	t_stack_lst	*curr;
	int			index;
	int			stack_len;

	curr = *a;
	index = 0;
	stack_len = ft_count(a);

	while (curr)
	{
		curr->final_pos = index;
		index++;
		curr = curr->next;
	}

	while (stack_len > 1)
	{
		curr = *a;
		while (curr)
		{
			currenta = *a;
			while (currenta)
			{
				if (curr->content > currenta->content && curr->final_pos < currenta->final_pos)
					ft_swap_pos(curr, currenta);
				currenta = currenta->next;
			}
			curr = curr->next;
		}
		stack_len--;
	}
	// ft_lstprint (a, "LISTE A");
}
